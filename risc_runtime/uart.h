// ******************** uart.h ***************************************
//                 Risc-Dsp runtime library
// 
// This file implements the interface to uart port
//
// (c) multicore.ru
//
// *******************************************************************
#ifndef _UART_H_
#define _UART_H_

#ifdef    __cplusplus
extern "C" {
#endif
    
#include "erlcommon.h"            

//
// External UART registers.
//

//
// Line control register
//
#define MC_LCR_5BITS      0x00    /* character length: 5 bits */
#define MC_LCR_6BITS      0x01    /* character length: 6 bits */
#define MC_LCR_7BITS      0x02    /* character length: 7 bits */
#define MC_LCR_8BITS      0x03    /* character length: 8 bits */

#define MC_LCR_STOPB      0x04    /* use 2 stop bits */
#define MC_LCR_PENAB      0x08    /* parity enable */
#define MC_LCR_PEVEN      0x10    /* even parity */
#define MC_LCR_PFORCE     0x20    /* force parity */
#define MC_LCR_SBREAK     0x40    /* break control */
#define MC_LCR_DLAB       0x80    /* divisor latch access bit */

//
// FIFO control register
//
#define MC_FCR_ENABLE     0x01    /* enable FIFO */
#define MC_FCR_RCV_RST    0x02    /* clear receive FIFO */
#define MC_FCR_XMT_RST    0x04    /* clear transmit FIFO */

#define MC_FCR_TRIGGER_1  0x00    /* receive FIFO level: 1/4 byte */
#define MC_FCR_TRIGGER_4  0x40    /* receive FIFO level: 4/16 bytes */
#define MC_FCR_TRIGGER_8  0x80    /* receive FIFO level: 8/56 bytes */
#define MC_FCR_TRIGGER_14 0xc0    /* receive FIFO level: 14/60 bytes */

//
// Line status register
//
#define MC_LSR_RXRDY      0x01    /* receiver ready */
#define MC_LSR_OE         0x02    /* overrun error */
#define MC_LSR_PE         0x04    /* parity error */
#define MC_LSR_FE         0x08    /* framing error */
#define MC_LSR_BI         0x10    /* break interrupt */
#define MC_LSR_TXRDY      0x20    /* transmitter holding register empty */
#define MC_LSR_TEMT       0x40    /* transmitter empty */
#define MC_LSR_FIFOE      0x80    /* error in receive FIFO */

//
// Interrupt enable register
//
#define MC_IER_ERXRDY     0x01    /* enable receive data/timeout intr */
#define MC_IER_ETXRDY     0x02    /* enable transmitter interrupts */
#define MC_IER_ERLS       0x04    /* enable receive line status intr */
#define MC_IER_EMSC       0x08    /* enable modem status interrupts */

//
// Interrupt identification register
//
#define MC_IIR_NOPEND     0x01        /* no interrupt pending */
#define MC_IIR_IMASK      0x0e        /* interrupt type mask */
#define MC_IIR_FENAB      0xc0    /* set if FIFOs are enabled */

#define MC_IIR_RLS        0x06    /* receiver line status */
#define MC_IIR_RXRDY      0x04    /* receiver data available */
#define MC_IIR_RXTOUT     0x0c    /* character timeout indication */
#define MC_IIR_TXRDY      0x02    /* transmitter holding reg empty */
#define MC_IIR_MLSC       0x00    /* modem status */

//
// Modem control register
//
#define MC_MCR_DTR        0x01    /* control DTR output */
#define MC_MCR_RTS        0x02    /* control RTS output */
#define MC_MCR_OUT1       0x04    /* control OUT1 output */
#define MC_MCR_OUT2       0x08    /* control OUT2 output, used as global interrupt enable in PCs */
#define MC_MCR_LOOPBACK   0x10    /* set local loopback mode */

//
// Modem status register
//
#define MC_MSR_DCTS       0x01    /* CTS changed */
#define MC_MSR_DDSR       0x02    /* DSR changed */
#define MC_MSR_TERI       0x04    /* RI changed from 0 to 1 */
#define MC_MSR_DDCD       0x08    /* DCD changed */
#define MC_MSR_CTS        0x10    /* CTS input */
#define MC_MSR_DSR        0x20    /* DSR input */
#define MC_MSR_RI         0x40    /* RI input */
#define MC_MSR_DCD        0x80    /* DCD input */

//
// config uart
//
void uart_config(int id, unsigned long baud);

//
// send symbol
//
void uart_putchar (int id, short c);

//
// receive symbol
//
unsigned short uart_getchar (int id);

//
// Receve processor frequency
//
unsigned get_cpu_clock(void);

//
// Check that the symbol is present in the uart.
//
unsigned short uart_testchar(int id);

#ifdef    __cplusplus
}
#endif

#endif //_UART_H_
