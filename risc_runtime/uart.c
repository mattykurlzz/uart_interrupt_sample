// ******************** uart.c ***************************************
//                 Risc-Dsp runtime library
//
// Debug console input/output for MIPS microcontrollers.
// Send a byte to the UART transmitter, with interrupts disabled.
//
// (c) multicore.ru
//
// *******************************************************************
#include "uart.h"
#include "cpu.h"

//
// UART.
//

//
// Compute the 16-bit baud rate divisor, given
// the oscillator frequency and baud rate.
// Round to the nearest integer.

#define MC_DL_BAUD(fr,bd)	(((fr)/8 + (bd)) / (bd) / 2)

//
// Baudrate generator source - CLK
//
#define setup_baud_rate(khz, baud)	{ \
	unsigned divisor = MC_DL_BAUD (khz * 1000, baud);		\
	MC_LCR = MC_LCR_8BITS | MC_LCR_DLAB;			\
	MC_DLM = divisor >> 8;					\
	MC_DLL = divisor;					\
	MC_LCR = MC_LCR_8BITS;					\
}

//
// @name: uart_config
// @description: Setup uart port to transfer at given speed and frequency
//
// @in int id   - id of UART (0,1)
// @in unsigned long baud - data transfer speed
//
void uart_config(int id, unsigned long baud)
{
    if ((id < 0)  || (id > 1)) return;
	/* Setup baud rate generator. */
    unsigned divisor = MC_DL_BAUD (get_cpu_clock(), baud);

	MC_LCR(id) = MC_LCR_8BITS | MC_LCR_DLAB;	//0b10000011 - 8 бит данных, разрешен доступ к регистрам
												//DLL, DLM - регистрам делителя
	MC_DLM(id) = divisor >> 8;					//записывает младшие разряды делителя
	MC_DLL(id) = divisor;						//записывает старшие разряды делителя
	MC_LCR(id) = MC_LCR_8BITS;					//запрещает запись в DLL и DLM и разрешает в другие
	MC_SCLR(id) = 0;							//регистр предделителя
	MC_SPR(id) = 0;								//запрещает обмен данными, прерывания
	MC_IER(id) = 0;								//запрещает все прерывания
	MC_MSR(id) = 0;								//
	MC_MCR(id) = MC_MCR_DTR | MC_MCR_RTS | MC_MCR_OUT2; //выставляет низкий уровень на указанных выходах
	MC_FCR(id) = MC_FCR_RCV_RST | MC_FCR_XMT_RST | MC_FCR_ENABLE;	//ресет FIFO ресивера, трансмиттера, режим fifo

	/* Clear pending status, data and irq. */

	(void) MC_LSR(id);
	(void) MC_MSR(id);
	(void) MC_RBR(id);
	(void) MC_IIR(id);
}

//
// @name: uart_putchar
// @description: Send symbol
//
// @in int id   - id of UART (0,1)
// @in short c   - symbol
//
void uart_putchar (int id, short c)
{
	int x;
	if ((id < 0)  || (id > 1)) return;

	/* Wait for transmitter holding register empty. */
	while (! (MC_LSR(id) & MC_LSR_TXRDY))
	{
		continue;
	}
again:
	/* Send byte. */
	MC_THR(id) = c;

	/* Wait for transmitter holding register empty. */

	while (! (MC_LSR(id) & MC_LSR_TXRDY))
	{
		continue;
	}

	if (c == '\n')
	{
		c = '\r';
		goto again;
	}
}

//
// @name: uart_getchar
// @description: Wait for the byte to be received and return it.
//
// @in int id   - id of UART (0,1)
//
// @return: unsigned short - received symbol
//
unsigned short uart_getchar (int id)
{
	unsigned char c;
	int x;

	if ((id < 0)  || (id > 1)) return 0;

	for (;;)
	{
		/* Wait until receive data available. */
		if (! (MC_LSR(id) & MC_LSR_RXRDY))
		{
			continue;
		}
		c = MC_RBR(id);
		break;
	}
	return c;
}

//
// @name: uart_testchar
// @description: Check that the symbol is present in the uart.
//
// @in int id   - id of UART (0,1)
//
// @return: (unsigned short) 1 - symbol is present
//          (unsigned short) 1 - symbol is't present

unsigned short uart_testchar (int id)
	{
	unsigned char c;
	int x;

	if ((id < 0)  || (id > 1)) return 0;

	if (! (MC_LSR(id) & MC_LSR_RXRDY))
		return 0;
	else
		return 1;
	}
