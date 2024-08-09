/****************************************************************
 *                     SAMPLE_UART                              *
 * Демонстрирует работу с UART, baud rate = 115200             *
 * После выполнения должна появиться строка с                   *
 * различными символами.                                        *
 * необходимо установить переменную UART_Number
 * в зависимости от подключаемого uart                  *
 ***************************************************************/


#include "risc_runtime/cpu.h"
#include "risc_runtime/debug_printf.h"
#include "risc_runtime/risc_interrupt.h"
#include "risc_runtime/uart.h"



RISC_INTERRUPT_TYPE int_t = INTH_80000180;	//задается расположение вектора прерываний

volatile unsigned int UART_Number = 0;		//номер UART, на котороый будет выводиться информация

#define LEN 1024							//длина строки символов
#define LDAT7 (1<<9)

char output[LEN];
volatile unsigned int ExitStatus = 1;
volatile unsigned int Flag_Timeout = 0;		//флаг вызова обработчика прерываний RISC_COMPARE

/*
 * функция сравнивает array0 и array1 посимвольно по всей длине len и возвращает:
 * 1 если массивы совпадают
 * 0 в ином случае
 * */
unsigned int VerifyArray(char *array0, char *array1, unsigned int len)
{
    unsigned int i;

    for (i = 0; i < len; i++)
        if (array0[i] != array1[i])
            return 0;

    return 1;
}

/*
 * обработчик прерываний типа RISC_COMPARE
 * производит запись нуля в регистр CPO.COUNT
 * */
void timer_hnlr(int a)
{
  unsigned int param = 0;						//записываемое значение
  asm volatile ("mtc0 %0, $11" : : "r"(param));	//запись нуля в регистр count и обнуление прерывания
  Flag_Timeout = 1;								//выставление флага
  asm volatile ("nop");	//???

  MFBSP3_DIR = LDAT7;
  MFBSP3_GPIO = LDAT7;
}

/*
 * посимвольно передает данные на UART пока строка не закончится
 * */
int uart_puts_num(const char* str, unsigned int num)
{
//    do
//    {
//        uart_putchar(num, *str);				//интерфейс для отправки символа через UART
//    } while(*str++);							//до края массива
//    return 0;
	/*
	 * todo:
	 * 1. разрешить прерывания от uart
	 * 2. задать обработчика прерываний uart
	 * 3. запустить вызов прерываний
	 * 4. посмотреть, происходит ли вход в обработчик
	 * 5. написать обработчик прерываний
	 */
}

int main()
{
  if (UART_Number > 1)							//UART только 2, предположение иного - ошибка
  {
	  ExitStatus = 1;
  }
  else {
      risc_set_interrupts_vector(int_t);				//задает вектор прерываний для данной платы
      risc_enable_interrupt(RISC_COMPARE,0);			//разрешает прерывания типа COMPARE, которые
      	  	  	  	  	  	  	  	  	  	  	  	  	//происходят по готовности MC_RBR после
      	  	  	  	  	  	  	  	  	  	  	  	  	//считывания MC_LSR
      risc_register_interrupt(timer_hnlr, RISC_COMPARE);//регистрирует прерывания
      uart_config (UART_Number, 115200);				//библиотечная функция, настраивающая uart

      unsigned int param = get_cpu_clock();
      param *= 5;
      asm volatile ("mtc0 %0, $11" : : "r"(param));		//выставляет регистр compare на 5 секунд (клок*5)
      param = 0;
      asm volatile ("mtc0 %0, $9" : : "r"(param));		//обнуляется count, теперь через 5 секунд произойдет
      	  	  	  	  	  	  	  	  	  	  	  	  	//прерывание RISC_COMPARE


//      char input[LEN] = {0};
      int i;

      for (i = 0; i < LEN; i++)
        output[i] = (i % 93) + 33;						//генерирует строку
      uart_puts_num(output, UART_Number);				//передает в uart строку
//      for (i=0; i<LEN; i++)
//      {
//        input[i] = uart_getchar_with_timeout(UART_Number);//считывает строку
//      }
//      if(VerifyArray(input, output, LEN))				//проверяет соответствие строк
    	  ExitStatus = 0;
  }
  return ExitStatus;
}
