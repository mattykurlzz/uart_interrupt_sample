// ***************** mc30sf6.h ***************************************
//                 Risc-Dsp runtime library
//
// This file implements address of nvcom01/02 registers
//
// (c) multicore.ru
//
// *******************************************************************
#ifndef ___MCL_MC30SF_H___
#define ___MCL_MC30SF_H___


#ifdef	__cplusplus
extern "C" {
#endif

//DMA parameters defines
#define DMA_CONTROLLERS_NUM (2)
#define DMA_CHANNELS_IN_CONTROLLER (8)

//NVCOM registers

//DMA MemCh Registers

// MemChi Registers
#define	CSR_MemCh(i)		*((volatile int *)(0xb82F0000+0x80*i))
#define	CP_MemCh(i)		*((volatile int *)(0xb82F0004+0x80*i))
#define	IR0_MemCh(i)		*((volatile int *)(0xb82F0008+0x80*i))
#define	IR1_MemCh(i)		*((volatile int *)(0xb82F000C+0x80*i))
#define	OR_MemCh(i)		*((volatile int *)(0xb82F0010+0x80*i))
#define	Y_MemCh(i)		*((volatile int *)(0xb82F0014+0x80*i))
#define	RUN_MemCh(i)		*((volatile int *)(0xb82F0018+0x80*i))

//MemCh0 Registers
#define	CSR_MemCh0		*((volatile int *)0xb82F0000)
#define	CP_MemCh0		*((volatile int *)0xb82F0004)
#define	IR0_MemCh0		*((volatile int *)0xb82F0008)
#define	IR1_MemCh0		*((volatile int *)0xb82F000C)
#define	OR_MemCh0		*((volatile int *)0xb82F0010)
#define	Y_MemCh0		*((volatile int *)0xb82F0014)
#define	RUN_MemCh0		*((volatile int *)0xb82F0018)
//MemCh1 Registers
#define	CSR_MemCh1		*((volatile int *)0xb82F0080)
#define	CP_MemCh1		*((volatile int *)0xb82F0084)
#define	IR0_MemCh1		*((volatile int *)0xb82F0088)
#define	IR1_MemCh1		*((volatile int *)0xb82F008C)
#define	OR_MemCh1		*((volatile int *)0xb82F0090)
#define	Y_MemCh1		*((volatile int *)0xb82F0094)
#define	RUN_MemCh1		*((volatile int *)0xb82F0098)
//MemCh2 Registers
#define	CSR_MemCh2		*((volatile int *)0xb82F0100)
#define	CP_MemCh2		*((volatile int *)0xb82F0104)
#define	IR0_MemCh2		*((volatile int *)0xb82F0108)
#define	IR1_MemCh2		*((volatile int *)0xb82F010C)
#define	OR_MemCh2		*((volatile int *)0xb82F0110)
#define	Y_MemCh2		*((volatile int *)0xb82F0114)
#define	RUN_MemCh2		*((volatile int *)0xb82F0118)
//MemCh3 Registers
#define	CSR_MemCh3		*((volatile int *)0xb82F0180)
#define	CP_MemCh3		*((volatile int *)0xb82F0184)
#define	IR0_MemCh3		*((volatile int *)0xb82F0188)
#define	IR1_MemCh3		*((volatile int *)0xb82F018C)
#define	OR_MemCh3		*((volatile int *)0xb82F0190)
#define	Y_MemCh3		*((volatile int *)0xb82F0194)
#define	RUN_MemCh3		*((volatile int *)0xb82F0198)
//MemCh4 Registers
#define	CSR_MemCh4		*((volatile int *)0xb82F0200)
#define	CP_MemCh4		*((volatile int *)0xb82F0204)
#define	IR0_MemCh4		*((volatile int *)0xb82F0208)
#define	IR1_MemCh4		*((volatile int *)0xb82F020C)
#define	OR_MemCh4		*((volatile int *)0xb82F0210)
#define	Y_MemCh4		*((volatile int *)0xb82F0214)
#define	RUN_MemCh4		*((volatile int *)0xb82F0218)
//MemCh5 Registers
#define	CSR_MemCh5		*((volatile int *)0xb82F0280)
#define	CP_MemCh5		*((volatile int *)0xb82F0284)
#define	IR0_MemCh5		*((volatile int *)0xb82F0288)
#define	IR1_MemCh5		*((volatile int *)0xb82F028C)
#define	OR_MemCh5		*((volatile int *)0xb82F0290)
#define	Y_MemCh5		*((volatile int *)0xb82F0294)
#define	RUN_MemCh5		*((volatile int *)0xb82F0298)
//MemCh6 Registers
#define	CSR_MemCh6		*((volatile int *)0xb82F0300)
#define	CP_MemCh6		*((volatile int *)0xb82F0304)
#define	IR0_MemCh6		*((volatile int *)0xb82F0308)
#define	IR1_MemCh6		*((volatile int *)0xb82F030C)
#define	OR_MemCh6		*((volatile int *)0xb82F0310)
#define	Y_MemCh6		*((volatile int *)0xb82F0314)
#define	RUN_MemCh6		*((volatile int *)0xb82F0318)
//MemCh7 Registers
#define	CSR_MemCh7		*((volatile int *)0xb82F0380)
#define	CP_MemCh7		*((volatile int *)0xb82F0384)
#define	IR0_MemCh7		*((volatile int *)0xb82F0388)
#define	IR1_MemCh7		*((volatile int *)0xb82F038C)
#define	OR_MemCh7		*((volatile int *)0xb82F0390)
#define	Y_MemCh7		*((volatile int *)0xb82F0394)
#define	RUN_MemCh7		*((volatile int *)0xb82F0398)

//MemCh10 Registers
#define	CSR_MemC1h0		*((volatile int *)0xb82F0400)
#define	CP_MemCh10		*((volatile int *)0xb82F0404)
#define	IR0_MemCh10		*((volatile int *)0xb82F0408)
#define	IR1_MemCh10		*((volatile int *)0xb82F040C)
#define	OR_MemCh10		*((volatile int *)0xb82F0410)
#define	Y_MemCh10		*((volatile int *)0xb82F0414)
#define	RUN_MemCh10		*((volatile int *)0xb82F0418)
//MemCh11 Registers
#define	CSR_MemCh11		*((volatile int *)0xb82F0480)
#define	CP_MemCh11		*((volatile int *)0xb82F0484)
#define	IR0_MemCh11		*((volatile int *)0xb82F0488)
#define	IR1_MemCh11		*((volatile int *)0xb82F048C)
#define	OR_MemCh11		*((volatile int *)0xb82F0490)
#define	Y_MemCh11		*((volatile int *)0xb82F0494)
#define	RUN_MemCh11		*((volatile int *)0xb82F0498)
//MemCh12 Registers
#define	CSR_MemCh12		*((volatile int *)0xb82F0500)
#define	CP_MemCh12		*((volatile int *)0xb82F0504)
#define	IR0_MemCh12		*((volatile int *)0xb82F0508)
#define	IR1_MemCh12		*((volatile int *)0xb82F050C)
#define	OR_MemCh12		*((volatile int *)0xb82F0510)
#define	Y_MemCh12		*((volatile int *)0xb82F0514)
#define	RUN_MemCh12		*((volatile int *)0xb82F0518)
//MemCh13 Registers
#define	CSR_MemCh13		*((volatile int *)0xb82F0580)
#define	CP_MemCh13		*((volatile int *)0xb82F0584)
#define	IR0_MemCh13		*((volatile int *)0xb82F0588)
#define	IR1_MemCh13		*((volatile int *)0xb82F058C)
#define	OR_MemCh13		*((volatile int *)0xb82F0590)
#define	Y_MemCh13		*((volatile int *)0xb82F0594)
#define	RUN_MemCh13		*((volatile int *)0xb82F0598)
//MemCh14 Registers
#define	CSR_MemCh14		*((volatile int *)0xb82F0600)
#define	CP_MemCh14		*((volatile int *)0xb82F0604)
#define	IR0_MemCh14		*((volatile int *)0xb82F0608)
#define	IR1_MemCh14		*((volatile int *)0xb82F060C)
#define	OR_MemCh14		*((volatile int *)0xb82F0610)
#define	Y_MemCh14		*((volatile int *)0xb82F0614)
#define	RUN_MemCh14		*((volatile int *)0xb82F0618)
//MemCh15 Registers
#define	CSR_MemCh15		*((volatile int *)0xb82F0680)
#define	CP_MemCh15		*((volatile int *)0xb82F0684)
#define	IR0_MemCh15		*((volatile int *)0xb82F0688)
#define	IR1_MemCh15		*((volatile int *)0xb82F068C)
#define	OR_MemCh15		*((volatile int *)0xb82F0690)
#define	Y_MemCh15		*((volatile int *)0xb82F0694)
#define	RUN_MemCh15		*((volatile int *)0xb82F0698)
//MemCh16 Registers
#define	CSR_MemCh16		*((volatile int *)0xb82F0700)
#define	CP_MemCh16		*((volatile int *)0xb82F0704)
#define	IR0_MemCh16		*((volatile int *)0xb82F0708)
#define	IR1_MemCh16		*((volatile int *)0xb82F070C)
#define	OR_MemCh16		*((volatile int *)0xb82F0710)
#define	Y_MemCh16		*((volatile int *)0xb82F0714)
#define	RUN_MemCh16		*((volatile int *)0xb82F0718)
//MemCh17 Registers
#define	CSR_MemCh17		*((volatile int *)0xb82F0780)
#define	CP_MemCh17		*((volatile int *)0xb82F0784)
#define	IR0_MemCh17		*((volatile int *)0xb82F0788)
#define	IR1_MemCh17		*((volatile int *)0xb82F078C)
#define	OR_MemCh17		*((volatile int *)0xb82F0790)
#define	Y_MemCh17		*((volatile int *)0xb82F0794)
#define	RUN_MemCh17		*((volatile int *)0xb82F0798)

//DMA EMAC_Ch

//EMAC RX Registers
#define	CSR_EMAC_RX	    *((volatile int *)0xb82FE800)
#define	CP_EMAC_RX		*((volatile int *)0xb82FE804)
#define	IR_EMAC_RX		*((volatile int *)0xb82FE808)
#define	RUN_EMAC_RX	    *((volatile int *)0xb82FE80C)
//EMAC TX Registers
#define	CSR_EMAC_TX		*((volatile int *)0xb82FE840)
#define	CP_EMAC_TX		*((volatile int *)0xb82FE844)
#define	IR_EMAC_TX		*((volatile int *)0xb82FE848)
#define	RUN_EMAC_TX		*((volatile int *)0xb82FE84C)

//DMA USB_Ch

//USBCh1 RX Registers
#define	CSR_USB_EP1_RX		*((volatile int *)0xb82F2800)
#define	CP_USB_EP1_RX		*((volatile int *)0xb82F2804)
#define	IR_USB_EP1_RX		*((volatile int *)0xb82F2808)
#define	RUN_USB_EP1_RX		*((volatile int *)0xb82F280C)
//USBCh2 TX Registers
#define	CSR_USB_EP2_TX		*((volatile int *)0xb82F2840)
#define	CP_USB_EP2_TX		*((volatile int *)0xb82F2844)
#define	IR_USB_EP2_TX		*((volatile int *)0xb82F2848)
#define	RUN_USB_EP2_TX		*((volatile int *)0xb82F284C)
//USBCh3 RX Registers
#define	CSR_USB_EP3_RX		*((volatile int *)0xb82F2880)
#define	CP_USB_EP3_RX		*((volatile int *)0xb82F2884)
#define	IR_USB_EP3_RX		*((volatile int *)0xb82F2888)
#define	RUN_USB_EP3_RX		*((volatile int *)0xb82F288C)
//USBCh4 TX Registers
#define	CSR_USB_EP4_TX		*((volatile int *)0xb82F28C0)
#define	CP_USB_EP4_TX		*((volatile int *)0xb82F28C4)
#define	IR_USB_EP4_TX		*((volatile int *)0xb82F28C8)
#define	RUN_USB_EP4_TX		*((volatile int *)0xb82F28CC)

//DMA MFBSP_CH Registers

//MFBSP_Ch0
#define	MFBSP_CSR_RX_CH0	*((volatile int *)0xB82F7800)
#define	MFBSP_CP_RX_CH0		*((volatile int *)0xB82F7804)
#define	MFBSP_IR_RX_CH0		*((volatile int *)0xB82F7808)
#define	MFBSP_RUN_RX_CH0	*((volatile int *)0xB82F780C)
//MFBSP_Ch1
#define	MFBSP_CSR_RX_CH1	*((volatile int *)0xB82F7840)
#define	MFBSP_CP_RX_CH1		*((volatile int *)0xB82F7844)
#define	MFBSP_IR_RX_CH1		*((volatile int *)0xB82F7848)
#define	MFBSP_RUN_RX_CH1	*((volatile int *)0xB82F784C)
//MFBSP_Ch2
#define	MFBSP_CSR_RX_CH2	*((volatile int *)0xB82F7880)
#define	MFBSP_CP_RX_CH2		*((volatile int *)0xB82F7884)
#define	MFBSP_IR_RX_CH2		*((volatile int *)0xB82F7888)
#define	MFBSP_RUN_RX_CH2	*((volatile int *)0xB82F788C)
//MFBSP_Ch3
#define	MFBSP_CSR_RX_CH3	*((volatile int *)0xB82F78C0)
#define	MFBSP_CP_RX_CH3		*((volatile int *)0xB82F78C4)
#define	MFBSP_IR_RX_CH3		*((volatile int *)0xB82F78C8)
#define	MFBSP_RUN_RX_CH3	*((volatile int *)0xB82F78CC)

//DMA SWIC ch Registers

//SWIC DMA
#define	SWIC_DMA(a)			*(volatile unsigned*)(0xB82FC800 + (a))

#define SWIC0_DMA_RX_DES_BASE			(0xB82FC800)
#define SWIC0_DMA_RX_DAT_BASE			(0xB82FC840)
#define SWIC0_DMA_TX_DES_BASE			(0xB82FC880)
#define SWIC0_DMA_TX_DAT_BASE			(0xB82FC8C0)

#define SWIC1_DMA_RX_DES_BASE			(0xB82FD800)
#define SWIC1_DMA_RX_DAT_BASE			(0xB82FD840)
#define SWIC1_DMA_TX_DES_BASE			(0xB82FD880)
#define SWIC1_DMA_TX_DAT_BASE			(0xB82FD8C0)

//SWIC DMA RX
#define	CSR_SWIC_RX_DES(i)	SWIC_DMA(i*0x1000)
#define	CP_SWIC_RX_DES(i)	SWIC_DMA(0x4 + (i*0x1000))
#define	IR_SWIC_RX_DES(i)	SWIC_DMA(0x8 + (i*0x1000))
#define	RUN_SWIC_RX_DES(i)	SWIC_DMA(0xC + (i*0x1000))
#define	CSR_SWIC_RX_DAT(i)	SWIC_DMA(0x40 + (i*0x1000))
#define	CP_SWIC_RX_DAT(i)	SWIC_DMA(0x44 + (i*0x1000))
#define	IR_SWIC_RX_DAT(i)	SWIC_DMA(0x48 + (i*0x1000))
#define	RUN_SWIC_RX_DAT(i)	SWIC_DMA(0x4C + (i*0x1000))

//SWIC DMA TX
#define	CSR_SWIC_TX_DES(i)	SWIC_DMA(0x80 + (i*0x1000))
#define	CP_SWIC_TX_DES(i)	SWIC_DMA(0x84 + (i*0x1000))
#define	IR_SWIC_TX_DES(i)	SWIC_DMA(0x88 + (i*0x1000))
#define	RUN_SWIC_TX_DES(i)	SWIC_DMA(0x8C + (i*0x1000))
#define	CSR_SWIC_TX_DAT(i)	SWIC_DMA(0xC0 + (i*0x1000))
#define	CP_SWIC_TX_DAT(i)	SWIC_DMA(0xC4 + (i*0x1000))
#define	IR_SWIC_TX_DAT(i)	SWIC_DMA(0xC8 + (i*0x1000))
#define	RUN_SWIC_TX_DAT(i)	SWIC_DMA(0xCC + (i*0x1000))

//SWIC 0 DMA RX
#define	CSR_SWIC_RX_DES0	*((volatile int *)0xB82FC800)
#define	CP_SWIC_RX_DES0		*((volatile int *)0xB82FC804)
#define	IR_SWIC_RX_DES0		*((volatile int *)0xB82FC808)
#define	RUN_SWIC_RX_DES0	*((volatile int *)0xB82FC80C)
#define	CSR_SWIC_RX_DAT0	*((volatile int *)0xB82FC840)
#define	CP_SWIC_RX_DAT0		*((volatile int *)0xB82FC844)
#define	IR_SWIC_RX_DAT0		*((volatile int *)0xB82FC848)
#define	RUN_SWIC_RX_DAT0	*((volatile int *)0xB82FC84C)

//SWIC 0 DMA TX
#define	CSR_SWIC_TX_DES0	*((volatile int *)0xB82FC880)
#define	CP_SWIC_TX_DES0		*((volatile int *)0xB82FC884)
#define	IR_SWIC_TX_DES0		*((volatile int *)0xB82FC888)
#define	RUN_SWIC_TX_DES0	*((volatile int *)0xB82FC88C)
#define	CSR_SWIC_TX_DAT0	*((volatile int *)0xB82FC8C0)
#define	CP_SWIC_TX_DAT0		*((volatile int *)0xB82FC8C4)
#define	IR_SWIC_TX_DAT0		*((volatile int *)0xB82FC8C8)
#define	RUN_SWIC_TX_DAT0	*((volatile int *)0xB82FC8CC)

//SWIC 1 DMA RX
#define	CSR_SWIC_RX_DES1	*((volatile int *)0xB82FD800)
#define	CP_SWIC_RX_DES1		*((volatile int *)0xB82FD804)
#define	IR_SWIC_RX_DES1		*((volatile int *)0xB82FD808)
#define	RUN_SWIC_RX_DES1	*((volatile int *)0xB82FD80C)
#define	CSR_SWIC_RX_DAT1	*((volatile int *)0xB82FD840)
#define	CP_SWIC_RX_DAT1		*((volatile int *)0xB82FD844)
#define	IR_SWIC_RX_DAT1		*((volatile int *)0xB82FD848)
#define	RUN_SWIC_RX_DAT1	*((volatile int *)0xB82FD84C)

//SWIC 1 DMA TX
#define	CSR_SWIC_TX_DES1	*((volatile int *)0xB82FD880)
#define	CP_SWIC_TX_DES1		*((volatile int *)0xB82FD884)
#define	IR_SWIC_TX_DES1		*((volatile int *)0xB82FD888)
#define	RUN_SWIC_TX_DES1	*((volatile int *)0xB82FD88C)
#define	CSR_SWIC_TX_DAT1	*((volatile int *)0xB82FD8C0)
#define	CP_SWIC_TX_DAT1		*((volatile int *)0xB82FD8C4)
#define	IR_SWIC_TX_DAT1		*((volatile int *)0xB82FD8C8)
#define	RUN_SWIC_TX_DAT1	*((volatile int *)0xB82FD8CC)

//DMA GSWIC Registers

//GSWIC DMA RX
#define	CSR_GSW_RX_DES		*((volatile int *)0xB82FA800)
#define	CP_GSW_RX_DES		*((volatile int *)0xB82FA804)
#define	IR_GSW_RX_DES0		*((volatile int *)0xB82FA808)
#define	RUN_GSW_RX_DES		*((volatile int *)0xB82FA80C)
#define	CSR_GSW_RX_DAT		*((volatile int *)0xB82FA840)
#define	CP_GSW_RX_DAT		*((volatile int *)0xB82FA844)
#define	IR_GSW_RX_DAT		*((volatile int *)0xB82FA848)
#define	RUN_GSW_RX_DAT		*((volatile int *)0xB82FA84C)

//GWIC DMA TX
#define	CSR_GSW_TX_DES		*((volatile int *)0xB82FA880)
#define	CP_GSW_TX_DES		*((volatile int *)0xB82FA884)
#define	IR_GSW_TX_DES		*((volatile int *)0xB82FA888)
#define	RUN_GSW_TX_DES		*((volatile int *)0xB82FA88C)
#define	CSR_GSW_TX_DAT		*((volatile int *)0xB82FA8C0)
#define	CP_GSW_TX_DAT		*((volatile int *)0xB82FA8C4)
#define	IR_GSW_TX_DAT		*((volatile int *)0xB82FA8C8)
#define	RUN_GSW_TX_DAT		*((volatile int *)0xB82FA8CC)

//SPI Registers
//#define	TX_SPI			*((volatile int *)0xb82F6000)
//#define	RX_SPI			*((volatile int *)0xb82F6000)
//#define	CSR_SPI			*((volatile int *)0xb82F6004)
//#define	DIR_SPI			*((volatile int *)0xb82F6008)
//#define	TCTR			*((volatile int *)0xb82F6010)
//#define	RCTR			*((volatile int *)0xb82F6014)
//#define	TSR				*((volatile int *)0xb82F6018)
//#define	RSR				*((volatile int *)0xb82F601C)

//SWIC Registers
#define SWIC0_BASE			(0xB82FC000)
#define SWIC1_BASE			(0xB82FD000)
#define	SWIC_A(a)			*(volatile unsigned*)(0xB82FC000 + (a))

//UART0 Registers
#define	UART0_RBR		*((volatile int *)0xb82F3000)
#define	UART0_THR		*((volatile int *)0xb82F3000)
#define	UART0_IER		*((volatile int *)0xb82F3004)
#define	UART0_IIR		*((volatile int *)0xb82F3008)
#define	UART0_FCR		*((volatile int *)0xb82F3008)
#define	UART0_LCR		*((volatile int *)0xb82F300C)
#define	UART0_MCR		*((volatile int *)0xb82F3010)
#define	UART0_LSR		*((volatile int *)0xb82F3014)
#define	UART0_MSR		*((volatile int *)0xb82F3018)
#define	UART0_SPR		*((volatile int *)0xb82F301C)
#define	UART0_DLL		*((volatile int *)0xb82F3000)
#define	UART0_DLM		*((volatile int *)0xb82F3004)
#define	UART0_SCLR		*((volatile int *)0xb82F3014)

//UART1 Registers
#define	UART1_RBR		*((volatile int *)0xb82F3400)
#define	UART1_THR		*((volatile int *)0xb82F3400)
#define	UART1_IER		*((volatile int *)0xb82F3404)
#define	UART1_IIR		*((volatile int *)0xb82F3408)
#define	UART1_FCR		*((volatile int *)0xb82F3408)
#define	UART1_LCR		*((volatile int *)0xb82F340C)
#define	UART1_MCR		*((volatile int *)0xb82F3410)
#define	UART1_LSR		*((volatile int *)0xb82F3414)
#define	UART1_MSR		*((volatile int *)0xb82F3418)
#define	UART1_SPR		*((volatile int *)0xb82F341C)
#define	UART1_DLL		*((volatile int *)0xb82F3400)
#define	UART1_DLM		*((volatile int *)0xb82F3404)
#define	UART1_SCLR		*((volatile int *)0xb82F3414)

//
// External UART registers.
//
#define MC_R(a)		*(volatile unsigned*)(0xB82F0000 + (a))

#define MC_RBR(i)                MC_R (0x3000+(i*0x400))        /* �������� �������� ������� */
#define MC_THR(i)                MC_R (0x3000+(i*0x400))        /* ���������� �������� ������� */
#define MC_IER(i)                MC_R (0x3004+(i*0x400))        /* ������� ���������� ���������� */
#define MC_IIR(i)                MC_R (0x3008+(i*0x400))        /* ������� ������������� ���������� */
#define MC_FCR(i)                MC_R (0x3008+(i*0x400))        /* ������� ���������� FIFO */
#define MC_LCR(i)                MC_R (0x300C+(i*0x400))        /* ������� ���������� ������ */
#define MC_MCR(i)                MC_R (0x3010+(i*0x400))        /* ������� ���������� ������� */
#define MC_LSR(i)                MC_R (0x3014+(i*0x400))        /* ������� ��������� ����� */
#define MC_MSR(i)                MC_R (0x3018+(i*0x400))        /* ������� ��������� ������� */
#define MC_SPR(i)                MC_R (0x301C+(i*0x400))        /* ������� Scratch Pad */
#define MC_DLL(i)		MC_R (0x3000+(i*0x400))	/* ������� �������� ������� */
#define MC_DLM(i)		MC_R (0x3004+(i*0x400))	/* ������� �������� ������� */
#define MC_SCLR(i)		MC_R (0x3014+(i*0x400))	/* ������� ������������ (scaler) */

//IT0 Registers
#define	ITCSR0			*((volatile int *)0xb82F5020)
#define	ITPERIOD0		*((volatile int *)0xb82F5024)
#define	ITCOUNT0		*((volatile int *)0xb82F5028)
#define	ITSCALE0		*((volatile int *)0xb82F502C)

//IT1 Registers
#define	ITCSR1			*((volatile int *)0xb82F5000)
#define	ITPERIOD1		*((volatile int *)0xb82F5004)
#define	ITCOUNT1		*((volatile int *)0xb82F5008)
#define	ITSCALE1		*((volatile int *)0xb82F500C)

//WDT Registers
#define	WTCSR			*((volatile int *)0xb82F5010)
#define	WTPERIOD		*((volatile int *)0xb82F5014)
#define	WTCOUNT			*((volatile int *)0xb82F5018)
#define	WTSCALE			*((volatile int *)0xb82F501C)

////////////////////MFBSP Registers//////////////////////
#define MFBSP_BASE      0xB82F7000
//DMA MFBSP_RX_CH base address
#define MFBSP_DMA_RX_CH_BASE 0xB82F7800

#define _MFBSPport0		((mfbsp_port volatile *)0xb82f7000)
#define _MFBSPport1		((mfbsp_port volatile *)0xb82f7100)
#define _MFBSPport2		((mfbsp_port volatile *)0xb82f7200)
#define _MFBSPport3		((mfbsp_port volatile *)0xb82f7300)

#define _MFBSPdmaTXch0		((mfbsp_dma_ch volatile *)0xb82f7800)
#define _MFBSPdmaRXch0		((mfbsp_dma_ch volatile *)0xb82f7800)
#define _MFBSPdmaTXch1		((mfbsp_dma_ch volatile *)0xb82f7840)
#define _MFBSPdmaRXch1		((mfbsp_dma_ch volatile *)0xb82f7840)
#define _MFBSPdmaTXch2		((mfbsp_dma_ch volatile *)0xb82f7880)
#define _MFBSPdmaRXch2		((mfbsp_dma_ch volatile *)0xb82f7880)
#define _MFBSPdmaTXch3		((mfbsp_dma_ch volatile *)0xb82f78c0)
#define _MFBSPdmaRXch3		((mfbsp_dma_ch volatile *)0xb82f78c0)


//MFBSP0 Registers
#define	MFBSP0_TX		*((volatile int *)0xb82F7000)
#define	MFBSP0_RX		*((volatile int *)0xb82F7000)
#define	MFBSP0_CSR		*((volatile int *)0xb82F7004)
#define	MFBSP0_DIR		*((volatile int *)0xb82F7008)
#define	MFBSP0_GPIO		*((volatile int *)0xb82F700C)
#define	MFBSP0_TCTR			*((volatile int *)0xb82F7010)
#define	MFBSP0_RCTR			*((volatile int *)0xb82F7014)
#define	MFBSP0_TSR			*((volatile int *)0xb82F7018)
#define	MFBSP0_RSR			*((volatile int *)0xb82F701C)

//MFBSP1 Registers
#define	MFBSP1_TX		*((volatile int *)0xb82F7100)
#define	MFBSP1_RX		*((volatile int *)0xb82F7100)
#define	MFBSP1_CSR		*((volatile int *)0xb82F7104)
#define	MFBSP1_DIR		*((volatile int *)0xb82F7108)
#define	MFBSP1_GPIO		*((volatile int *)0xb82F710C)
#define	MFBSP_TCTR			*((volatile int *)0xb82F7110)
#define	MFBSP1_RCTR			*((volatile int *)0xb82F7114)
#define	MFBSP1_TSR			*((volatile int *)0xb82F7118)
#define	MFBSP1_RSR			*((volatile int *)0xb82F711C)

//MFBSP2 Registers
#define	MFBSP2_TX		*((volatile int *)0xb82F7200)
#define	MFBSP2_RX		*((volatile int *)0xb82F7200)
#define	MFBSP2_CSR		*((volatile int *)0xb82F7204)
#define	MFBSP2_DIR		*((volatile int *)0xb82F7208)
#define	MFBSP2_GPIO		*((volatile int *)0xb82F720C)
#define	MFBSP2_TCTR			*((volatile int *)0xb82F7210)
#define	MFBSP2_RCTR			*((volatile int *)0xb82F7214)
#define	MFBSP2_TSR			*((volatile int *)0xb82F7218)
#define	MFBSP2_RSR			*((volatile int *)0xb82F721C)

//MFBSP3 Registers
#define	MFBSP3_TX		*((volatile int *)0xb82F7300)
#define	MFBSP3_RX		*((volatile int *)0xb82F7300)
#define	MFBSP3_CSR		*((volatile int *)0xb82F7304)
#define	MFBSP3_DIR		*((volatile int *)0xb82F7308)
#define	MFBSP3_GPIO		*((volatile int *)0xb82F730C)
#define	MFBSP3_TCTR			*((volatile int *)0xb82F7310)
#define	MFBSP3_RCTR			*((volatile int *)0xb82F7314)
#define	MFBSP3_TSR			*((volatile int *)0xb82F7318)
#define	MFBSP3_RSR			*((volatile int *)0xb82F731C)
////////////////////MFBSP Registers//////////////////////

//USB Registers
#define	CSR_USB				*((volatile int *)0xb82F2000)
#define	INT_CSR_USB			*((volatile int *)0xb82F2004)
#define	VENDOR_DATA_USB		*((volatile int *)0xb82F200C)
#define	VENDOR_INDEX_USB	*((volatile int *)0xb82F2010)
#define	VENDOR_VALUE_USB	*((volatile int *)0xb82F2014)
#define	CFG_ADDR_USB		*((volatile int *)0xb82F2018)
#define	CFG_DATA_USB		*((volatile int *)0xb82F201C)
#define	REVISION_USB		*((volatile int *)0xb82F2020)
#define	CSR_EP1_USB			*((volatile int *)0xb82F2044)
#define	CSR_EP2_USB			*((volatile int *)0xb82F204C)
#define	CSR_EP3_USB			*((volatile int *)0xb82F2054)
#define	CSR_EP4_USB			*((volatile int *)0xb82F205C)

//Ethernet MAC Registers
#define	MAC_CONTROL		*((volatile int *)0xb82FE000)
#define	MAC_ADDR_L		*((volatile int *)0xb82FE004)
#define	MAC_ADDR_H		*((volatile int *)0xb82FE008)
#define	DADDR_L			*((volatile int *)0xb82FE00C)
#define	DADDR_H			*((volatile int *)0xb82FE010)
#define	FCS_CLIENT		*((volatile int *)0xb82FE014)
#define	TYPE			*((volatile int *)0xb82FE018)
#define	IFS_COLL_MODE		*((volatile int *)0xb82FE01C)
#define	TX_FRAME_CONTROL	*((volatile int *)0xb82FE020)
#define	STATUS_TX		*((volatile int *)0xb82FE024)
#define	UCADDR_L		*((volatile int *)0xb82FE028)
#define	UCADDR_H		*((volatile int *)0xb82FE02C)
#define	MCADDR_L		*((volatile int *)0xb82FE030)
#define	MCADDR_H		*((volatile int *)0xb82FE034)
#define	MCADDR_MASK_L		*((volatile int *)0xb82FE038)
#define	MCADDR_MASK_H		*((volatile int *)0xb82FE03C)
#define	HASHT_L			*((volatile int *)0xb82FE040)
#define	HASHT_H			*((volatile int *)0xb82FE044)
#define	RX_FRAME_CONTROL	*((volatile int *)0xb82FE048)
#define	RX_FR_MaxSize		*((volatile int *)0xb82FE04C)
#define	STATUS_RX		*((volatile int *)0xb82FE050)
#define	RX_FRAME_STATUS_FIFO	*((volatile int *)0xb82FE054)
#define	MD_CONTROL		*((volatile int *)0xb82FE058)
#define	MD_STATUS		*((volatile int *)0xb82FE05C)
#define	MD_MODE			*((volatile int *)0xb82FE060)
#define	TX_TEST_CSR		*((volatile int *)0xb82FE064)
#define	TX_FIFO			*((volatile int *)0xb82FE068)
#define	RX_TEST_CSR		*((volatile int *)0xb82FE06C)
#define	RX_FIFO			*((volatile int *)0xb82FE070)

//DDR_PORT0 Registers
#define	DDR_BAR0		*((volatile int *)0xb82F1210)
#define	DDR_CON0		*((volatile int *)0xb82F1214)
#define	DDR_TMR0		*((volatile int *)0xb82F1218)
#define	DDR_CSR0		*((volatile int *)0xb82F121C)
#define	DDR_MOD0		*((volatile int *)0xb82F1220)
#define	DDR_EXT0		*((volatile int *)0xb82F1224)
#define	DDR_ERR0		*((volatile int *)0xb82F1228)

//DDR_PORT1 Registers
#define	DDR_BAR1		*((volatile int *)0xb82F1310)
#define	DDR_CON1		*((volatile int *)0xb82F1314)
#define	DDR_TMR1		*((volatile int *)0xb82F1318)
#define	DDR_CSR1		*((volatile int *)0xb82F131C)
#define	DDR_MOD1		*((volatile int *)0xb82F1320)
#define	DDR_EXT1		*((volatile int *)0xb82F1324)
#define	DDR_ERR1		*((volatile int *)0xb82F1328)

//MPORT Registers
#define	CSCON0			*((volatile int *)0xb82F1000)
#define	CSCON1			*((volatile int *)0xb82F1004)
#define	CSCON2			*((volatile int *)0xb82F1008)
#define	CSCON3			*((volatile int *)0xb82F100C)
#define	CSCON4			*((volatile int *)0xb82F1010)
#define	SDRCON			*((volatile int *)0xb82F1014)
#define	SDRTMR			*((volatile int *)0xb82F1018)
#define	SDRCSR			*((volatile int *)0xb82F101C)
#define	FLY_WS			*((volatile int *)0xb82F1020)
#define	CSR_EXT			*((volatile int *)0xb82F1024)
#define	AERROR_EXT		*((volatile int *)0xb82F1028)

//System Registers
#define	CR_PLL			*((volatile int *)0xb82F4000)
#define	CR_PLL0			*((volatile int *)0xb82F4000)
#define	CR_PLL1			*((volatile int *)0xb82F407C)
#define	CLK_EN			*((volatile int *)0xb82F4004)
#define	SYS_CSR			*((volatile int *)0xb82F4008)
#define	MASKR0			*((volatile int *)0xb82F4010)
#define	QSTR0			*((volatile int *)0xb82F4014)
#define	MASKR1			*((volatile int *)0xb82F4018)
#define	QSTR1			*((volatile int *)0xb82F401C)
#define	MASKR2			*((volatile int *)0xb82F4020)
#define	QSTR2			*((volatile int *)0xb82F4024)
#define	MASKR3			*((volatile int *)0xb82F4028)
#define	QSTR3			*((volatile int *)0xb82F402C)
#define	IRQM			*((volatile int *)0xb82F4030)
#define	MASKR(i)		*((volatile int *)0xb82F4010 + (i*8))

//Hamming code registers
#define	CSR_CRAM0A		*((volatile int *)0xb82F4400)
#define	AERROR_CRAM0A	*((volatile int *)0xb82F4404)
#define	CSR_CRAM0B		*((volatile int *)0xb82F4408)
#define	AERROR_CRAM0B	*((volatile int *)0xb82F440C)
#define	CSR_CRAM1A		*((volatile int *)0xb82F4410)
#define	AERROR_CRAM1A	*((volatile int *)0xb82F4414)
#define	CSR_CRAM1B		*((volatile int *)0xb82F4418)
#define	AERROR_CRAM1B	*((volatile int *)0xb82F441C)
#define	CSR_CRAM2A		*((volatile int *)0xb82F4420)
#define	AERROR_CRAM2A	*((volatile int *)0xb82F4424)
#define	CSR_CRAM2B		*((volatile int *)0xb82F4428)
#define	AERROR_CRAM2B	*((volatile int *)0xb82F442C)
#define	CSR_CRAM3A		*((volatile int *)0xb82F4430)
#define	AERROR_CRAM3A	*((volatile int *)0xb82F4434)
#define	CSR_CRAM3B		*((volatile int *)0xb82F4438)
#define	AERROR_CRAM3B	*((volatile int *)0xb82F443C)
#define	CSR_ICACHE		*((volatile int *)0xb82F4800)
#define	AERROR_ICACHE	*((volatile int *)0xb82F4804)
#define	CSR_DCACHE		*((volatile int *)0xb82F4C00)
#define	AERROR_DCACHE	*((volatile int *)0xb82F4C04)

// DSP Registers
// DSP Base Registers
#define MASKR_DSP	        *((volatile int *)0xb8481000)
#define QSTR_DSP	        *((volatile int *)0xb8481004)
#define CSR_DSP		        *((volatile int *)0xb8481008)
#define TOTAL_RUN_CNT		*((volatile int *)0xb848100C)
#define TOTAL_CLK_CNT		*((volatile int *)0xb8481010)
#define QSTR_HEM_DSP		*((volatile int *)0xb8481014)

// DSP XBuffer (exchange) registers
#define X0_L		        *((volatile int *)0xb87FFF00)
#define X0_H		        *((volatile int *)0xb87FFF04)
#define X1_L		        *((volatile int *)0xb87FFF08)
#define X1_H		        *((volatile int *)0xb87FFF0C)
#define X2_L		        *((volatile int *)0xb87FFF10)
#define X2_H		        *((volatile int *)0xb87FFF14)
#define X3_L		        *((volatile int *)0xb87FFF18)
#define X3_H		        *((volatile int *)0xb87FFF1C)
#define X4_L		        *((volatile int *)0xb87FFF20)
#define X4_H		        *((volatile int *)0xb87FFF24)
#define X5_L		        *((volatile int *)0xb87FFF28)
#define X5_H		        *((volatile int *)0xb87FFF2C)
#define X6_L		        *((volatile int *)0xb87FFF30)
#define X6_H		        *((volatile int *)0xb87FFF34)
#define X7_L		        *((volatile int *)0xb87FFF38)
#define X7_H		        *((volatile int *)0xb87FFF3C)
#define X8_L		        *((volatile int *)0xb87FFF40)
#define X8_H		        *((volatile int *)0xb87FFF44)
#define X9_L		        *((volatile int *)0xb87FFF48)
#define X9_H		        *((volatile int *)0xb87FFF4C)
#define X10_L		        *((volatile int *)0xb87FFF50)
#define X10_H		        *((volatile int *)0xb87FFF54)
#define X11_L		        *((volatile int *)0xb87FFF58)
#define X11_H		        *((volatile int *)0xb87FFF5C)
#define X12_L		        *((volatile int *)0xb87FFF60)
#define X12_H		        *((volatile int *)0xb87FFF64)
#define X13_L		        *((volatile int *)0xb87FFF68)
#define X13_H		        *((volatile int *)0xb87FFF6C)
#define X14_L		        *((volatile int *)0xb87FFF70)
#define X14_H		        *((volatile int *)0xb87FFF74)
#define X15_L		        *((volatile int *)0xb87FFF78)
#define X15_H		        *((volatile int *)0xb87FFF7C)
#define X16_L		        *((volatile int *)0xb87FFF80)
#define X16_H		        *((volatile int *)0xb87FFF84)
#define X17_L		        *((volatile int *)0xb87FFF88)
#define X17_H		        *((volatile int *)0xb87FFF8C)
#define X18_L		        *((volatile int *)0xb87FFF90)
#define X18_H		        *((volatile int *)0xb87FFF94)
#define X19_L		        *((volatile int *)0xb87FFF98)
#define X19_H		        *((volatile int *)0xb87FFF9C)
#define X20_L		        *((volatile int *)0xb87FFFA0)
#define X20_H		        *((volatile int *)0xb87FFFA4)
#define X21_L		        *((volatile int *)0xb87FFFA8)
#define X21_H		        *((volatile int *)0xb87FFFAC)
#define X22_L		        *((volatile int *)0xb87FFFB0)
#define X22_H		        *((volatile int *)0xb87FFFB4)
#define X23_L		        *((volatile int *)0xb87FFFB8)
#define X23_H		        *((volatile int *)0xb87FFFBC)
#define X24_L		        *((volatile int *)0xb87FFFC0)
#define X24_H		        *((volatile int *)0xb87FFFC4)
#define X25_L		        *((volatile int *)0xb87FFFC8)
#define X25_H		        *((volatile int *)0xb87FFFCC)
#define X26_L		        *((volatile int *)0xb87FFFD0)
#define X26_H		        *((volatile int *)0xb87FFFD4)
#define X27_L		        *((volatile int *)0xb87FFFD8)
#define X27_H		        *((volatile int *)0xb87FFFDC)
#define X28_L		        *((volatile int *)0xb87FFFE0)
#define X28_H		        *((volatile int *)0xb87FFFE4)
#define X29_L		        *((volatile int *)0xb87FFFE8)
#define X29_H		        *((volatile int *)0xb87FFFEC)
#define X30_L		        *((volatile int *)0xb87FFFF0)
#define X30_H		        *((volatile int *)0xb87FFFF4)
#define X31_L		        *((volatile int *)0xb87FFFF8)
#define X31_H		        *((volatile int *)0xb87FFFFC)

#define BASE(i)		        (0xB8480000+(i)*0x400000)
// DSP PCU (control) registers
#define DCSR(i)		        *((volatile int *) (BASE(i)+0x0100))
#define SR(i)		        *((volatile int *) (BASE(i)+0x0104))
#define IDR(i)		        *((volatile int *) (BASE(i)+0x0108))
#define EFR(i)		        *((volatile int *) (BASE(i)+0x010C))
#define DSTART(i)	        *((volatile int *) (BASE(i)+0x010C))
#define IRQR(i)		        *((volatile int *) (BASE(i)+0x0110))
#define IMASKR(i)	        *((volatile int *) (BASE(i)+0x0114))
#define TMR(i)		        *((volatile int *) (BASE(i)+0x0118))
#define ARBR(i)		        *((volatile int *) (BASE(i)+0x011C))
#define PC(i)		        *((volatile int *) (BASE(i)+0x0120))
#define SS(i)		        *((volatile int *) (BASE(i)+0x0124))
#define LA(i)		        *((volatile int *) (BASE(i)+0x0128))
#define CSL(i)		        *((volatile int *) (BASE(i)+0x012C))
#define LC(i)		        *((volatile int *) (BASE(i)+0x0130))
#define CSH(i)		        *((volatile int *) (BASE(i)+0x0134))
#define SP(i) 		        *((volatile int *) (BASE(i)+0x0138))
#define SAR(i)		        *((volatile int *) (BASE(i)+0x013C))
#define CNTR(i)		        *((volatile int *) (BASE(i)+0x0140))
#define SAR1(i)		        *((volatile int *) (BASE(i)+0x0144))
#define SAR2(i)		        *((volatile int *) (BASE(i)+0x0148))
#define SAR3(i)		        *((volatile int *) (BASE(i)+0x014C))
#define SAR4(i)		        *((volatile int *) (BASE(i)+0x0150))
#define SAR5(i)		        *((volatile int *) (BASE(i)+0x0154))
#define SAR6(i)		        *((volatile int *) (BASE(i)+0x0158))
#define SAR7(i)		        *((volatile int *) (BASE(i)+0x015C))

#define CCR(i)		        *((volatile int *) (BASE(i)+0x0160))
#define PDNR(i)		        *((volatile int *) (BASE(i)+0x0164))
#define SFR(i)		        *((volatile int *) (BASE(i)+0x0168))
// DSP AGU (address) registers
#define A0(i)		        *((volatile int *) (BASE(i)+0x0080))
#define A1(i)		        *((volatile int *) (BASE(i)+0x0084))
#define A2(i)		        *((volatile int *) (BASE(i)+0x0088))
#define A3(i)		        *((volatile int *) (BASE(i)+0x008C))
#define A4(i)		        *((volatile int *) (BASE(i)+0x0090))
#define A5(i)		        *((volatile int *) (BASE(i)+0x0094))
#define A6(i)		        *((volatile int *) (BASE(i)+0x0098))
#define A7(i)		        *((volatile int *) (BASE(i)+0x009C))
#define I0(i)		        *((volatile int *) (BASE(i)+0x00A0))
#define I1(i)		        *((volatile int *) (BASE(i)+0x00A4))
#define I2(i)		        *((volatile int *) (BASE(i)+0x00A8))
#define I3(i)		        *((volatile int *) (BASE(i)+0x00AC))
#define I4(i)		        *((volatile int *) (BASE(i)+0x00B0))
#define I5(i)		        *((volatile int *) (BASE(i)+0x00B4))
#define I6(i)		        *((volatile int *) (BASE(i)+0x00B8))
#define I7(i)		        *((volatile int *) (BASE(i)+0x00BC))
#define M0(i)	        	*((volatile int *) (BASE(i)+0x00C0))
#define M1(i)		        *((volatile int *) (BASE(i)+0x00C4))
#define M2(i)		        *((volatile int *) (BASE(i)+0x00C8))
#define M3(i)		        *((volatile int *) (BASE(i)+0x00CC))
#define M4(i)		        *((volatile int *) (BASE(i)+0x00D0))
#define M5(i)		        *((volatile int *) (BASE(i)+0x00D4))
#define M6(i)		        *((volatile int *) (BASE(i)+0x00D8))
#define M7(i)		        *((volatile int *) (BASE(i)+0x00DC))
#define AT(i)		        *((volatile int *) (BASE(i)+0x00E0))
#define IT(i)		        *((volatile int *) (BASE(i)+0x00E4))
#define MT(i)		        *((volatile int *) (BASE(i)+0x00E8))
#define DT(i)		        *((volatile int *) (BASE(i)+0x00EC))
#define IVAR(i)		        *((volatile int *) (BASE(i)+0x00FC))
// DSP RF (data) registers
#define R0_L(i)		        *((volatile int *) (BASE(i)+0x0000))
#define R2_L(i)		        *((volatile int *) (BASE(i)+0x0004))
#define R4_L(i)		        *((volatile int *) (BASE(i)+0x0008))
#define R6_L(i)		        *((volatile int *) (BASE(i)+0x000C))
#define R8_L(i)		        *((volatile int *) (BASE(i)+0x0010))
#define R10_L(i)	        *((volatile int *) (BASE(i)+0x0014))
#define R12_L(i)	        *((volatile int *) (BASE(i)+0x0018))
#define R14_L(i)	        *((volatile int *) (BASE(i)+0x001C))
#define R16_L(i)	        *((volatile int *) (BASE(i)+0x0020))
#define R18_L(i)	        *((volatile int *) (BASE(i)+0x0024))
#define R20_L(i)	        *((volatile int *) (BASE(i)+0x0028))
#define R22_L(i)	        *((volatile int *) (BASE(i)+0x002C))
#define R24_L(i)	        *((volatile int *) (BASE(i)+0x0030))
#define R26_L(i)	        *((volatile int *) (BASE(i)+0x0034))
#define R28_L(i)	        *((volatile int *) (BASE(i)+0x0038))
#define R30_L(i)	        *((volatile int *) (BASE(i)+0x003C))
#define R1_L(i)		        *((volatile int *) (BASE(i)+0x0040))
#define R3_L(i)		        *((volatile int *) (BASE(i)+0x0044))
#define R5_L(i)		        *((volatile int *) (BASE(i)+0x0048))
#define R7_L(i)		        *((volatile int *) (BASE(i)+0x004C))
#define R9_L(i)		        *((volatile int *) (BASE(i)+0x0050))
#define R11_L(i)	        *((volatile int *) (BASE(i)+0x0054))
#define R13_L(i)	        *((volatile int *) (BASE(i)+0x0058))
#define R15_L(i)	        *((volatile int *) (BASE(i)+0x005C))
#define R17_L(i)	        *((volatile int *) (BASE(i)+0x0060))
#define R19_L(i)	        *((volatile int *) (BASE(i)+0x0064))
#define R21_L(i)	        *((volatile int *) (BASE(i)+0x0068))
#define R23_L(i)	        *((volatile int *) (BASE(i)+0x006C))
#define R25_L(i)	        *((volatile int *) (BASE(i)+0x0070))
#define R27_L(i)	        *((volatile int *) (BASE(i)+0x0074))
#define R29_L(i)	        *((volatile int *) (BASE(i)+0x0078))
#define R31_L(i)	        *((volatile int *) (BASE(i)+0x007C))
#define R1D_L(i)	        *((volatile int *) (BASE(i)+0x0180))
#define R1D_H(i)	        *((volatile int *) (BASE(i)+0x0184))
#define R3D_L(i)	        *((volatile int *) (BASE(i)+0x0188))
#define R3D_H(i)	        *((volatile int *) (BASE(i)+0x018C))
#define R5D_L(i)	        *((volatile int *) (BASE(i)+0x0190))
#define R5D_H(i)	        *((volatile int *) (BASE(i)+0x0194))
#define R7D_L(i)	        *((volatile int *) (BASE(i)+0x0198))
#define R7D_H(i)	        *((volatile int *) (BASE(i)+0x019C))
#define R9D_L(i)	        *((volatile int *) (BASE(i)+0x01A0))
#define R9D_H(i)	        *((volatile int *) (BASE(i)+0x01A4))
#define R11D_L(i)	        *((volatile int *) (BASE(i)+0x01A8))
#define R11D_H(i)	        *((volatile int *) (BASE(i)+0x01AC))
#define R13D_L(i)	        *((volatile int *) (BASE(i)+0x01B0))
#define R13D_H(i)	        *((volatile int *) (BASE(i)+0x01B4))
#define R15D_L(i)	        *((volatile int *) (BASE(i)+0x01B8))
#define R15D_H(i)	        *((volatile int *) (BASE(i)+0x01BC))
#define R17D_L(i)	        *((volatile int *) (BASE(i)+0x01C0))
#define R17D_H(i)	        *((volatile int *) (BASE(i)+0x01C4))
#define R19D_L(i)	        *((volatile int *) (BASE(i)+0x01C8))
#define R19D_H(i)	        *((volatile int *) (BASE(i)+0x01CC))
#define R21D_L(i)	        *((volatile int *) (BASE(i)+0x01D0))
#define R21D_H(i)	        *((volatile int *) (BASE(i)+0x01D4))
#define R23D_L(i)	        *((volatile int *) (BASE(i)+0x01D8))
#define R23D_H(i)	        *((volatile int *) (BASE(i)+0x01DC))
#define R25D_L(i)	        *((volatile int *) (BASE(i)+0x01E0))
#define R25D_H(i)	        *((volatile int *) (BASE(i)+0x01E4))
#define R27D_L(i)	        *((volatile int *) (BASE(i)+0x01E8))
#define R27D_H(i)	        *((volatile int *) (BASE(i)+0x01EC))
#define R29D_L(i)	        *((volatile int *) (BASE(i)+0x01F0))
#define R29D_H(i)	        *((volatile int *) (BASE(i)+0x01F4))
#define R31D_L(i)	        *((volatile int *) (BASE(i)+0x01F8))
#define R31D_H(i)	        *((volatile int *) (BASE(i)+0x01FC))

// DSP accumulator registers
#define AC0(i)		        *((volatile int *) (BASE(i)+0x0200))
#define AC1(i)		        *((volatile int *) (BASE(i)+0x0204))
#define AC2(i)		        *((volatile int *) (BASE(i)+0x0208))
#define AC3(i)		        *((volatile int *) (BASE(i)+0x020C))
#define AC4(i)		        *((volatile int *) (BASE(i)+0x0210))
#define AC5(i)		        *((volatile int *) (BASE(i)+0x0214))
#define AC6(i)		        *((volatile int *) (BASE(i)+0x0218))
#define AC7(i)		        *((volatile int *) (BASE(i)+0x021C))
#define AC8(i)		        *((volatile int *) (BASE(i)+0x0220))
#define AC9(i)		        *((volatile int *) (BASE(i)+0x0224))
#define AC10(i)		        *((volatile int *) (BASE(i)+0x0228))
#define AC11(i)		        *((volatile int *) (BASE(i)+0x022C))
#define AC12(i)		        *((volatile int *) (BASE(i)+0x0230))
#define AC13(i)		        *((volatile int *) (BASE(i)+0x0234))
#define AC14(i)		        *((volatile int *) (BASE(i)+0x0238))
#define AC15(i)		        *((volatile int *) (BASE(i)+0x023C))
// DSP debug registers
#define dbDCSR(i)	        *((volatile int *) (BASE(i)+0x0500))
#define Cnt_RUN(i)	        *((volatile int *) (BASE(i)+0x0518))
#define dbPCa(i)	        *((volatile int *) (BASE(i)+0x0524))
#define dbPCf(i)	        *((volatile int *) (BASE(i)+0x0528))
#define dbPCd(i)	        *((volatile int *) (BASE(i)+0x052C))
#define dbPCe(i)	        *((volatile int *) (BASE(i)+0x0520))
#define dbPCe1(i)	        *((volatile int *) (BASE(i)+0x0530))
#define dbPCe2(i)	        *((volatile int *) (BASE(i)+0x0534))
#define dbPCe3(i)	        *((volatile int *) (BASE(i)+0x0538))
#define dbSAR(i)	        *((volatile int *) (BASE(i)+0x053C))
#define dbCNTR(i)	        *((volatile int *) (BASE(i)+0x0540))
#define dbSAR1(i)	        *((volatile int *) (BASE(i)+0x0544))
#define dbSAR2(i)	        *((volatile int *) (BASE(i)+0x0548))
#define dbSAR3(i)	        *((volatile int *) (BASE(i)+0x054C))
#define dbSAR4(i)	        *((volatile int *) (BASE(i)+0x0550))
#define dbSAR5(i)	        *((volatile int *) (BASE(i)+0x0554))
#define dbSAR6(i)	        *((volatile int *) (BASE(i)+0x0558))
#define dbSAR7(i)	        *((volatile int *) (BASE(i)+0x055C))

// DSP Hamming code registers
#define CSR_He			*((volatile int *)(0xb8480300)
#define FIFO_He			*((volatile int *)(0xb8480304)
#define CSR_x0(i)		*((volatile int *) (BASE(i)+0x0308))
#define FIFO_x0(i)		*((volatile int *) (BASE(i)+0x030C))
#define CSR_y0(i)		*((volatile int *) (BASE(i)+0x0310))
#define FIFO_y0(i)		*((volatile int *) (BASE(i)+0x0314))
#define CSR_x1(i)		*((volatile int *) (BASE(i)+0x0318))
#define FIFO_x1(i)		*((volatile int *) (BASE(i)+0x031C))
#define CSR_y1(i)		*((volatile int *) (BASE(i)+0x0320))
#define FIFO_y1(i)		*((volatile int *) (BASE(i)+0x0324))
#define CSR_xy(i)		*((volatile int *) (BASE(i)+0x0328))
#define CSR_p0(i)		*((volatile int *) (BASE(i)+0x032C))
#define FIFO_p0(i)		*((volatile int *) (BASE(i)+0x0330))
#define CSR_p1(i)		*((volatile int *) (BASE(i)+0x0334))
#define FIFO_p1(i)		*((volatile int *) (BASE(i)+0x0338))

// mc30sf dsp memory
#define _PRAM0	((unsigned int volatile *)0xb8440000)
#define _PRAM1	((unsigned int volatile *)0xb8840000)
#define	_XYRAM0	((unsigned int volatile *)0xb8400000)
#define _XYRAM1	((unsigned int volatile *)0xb8800000)
#define _XBUF	((unsigned int volatile *)0xb87fff00)
#define _REGS0	((unsigned char volatile *)0xb8480000)
#define _REGS1	((unsigned char volatile *)0xb8880000)
    
//#define _XBUF                   ((unsigned int volatile *)0xb87fff00)    
#define CORE_XYRAM(i)           ((unsigned int volatile *)(0xB8400000+(i)*0x400000))
#define CORE_PRAM(i)            ((unsigned int volatile *)(0xB8440000+(i)*0x400000))
#define CORE_REGS(i)            ((unsigned int volatile *)(0xb8480000+(i)*0x400000))

    
    
// Размер страницы памяти программ и данных в сегменте. 
// Предназначается при использовании плавающей границы памяти.
// Размер в байтах      
//#define DSP_SIZE_PAGE 0x8000u
// Предназначаются без использования плавающей границы памяти.
// Размер в байтах    
#define DSP_SIZE_PRAM_PER_CORE 0x8000u    
#define DSP_SIZE_XYRAM_PER_CORE 0x10000u
    
//#define RISC_TO_DSP_MASK_DATA 0xffff
//#define RISC_TO_DSP_MASK_TEXT 0x7fff    
    

#define _AGU0   ((AGU volatile *)(_REGS0+0x80))
#define _AGU1   ((AGU volatile *)(_REGS1+0x80))

#ifdef	__cplusplus
}
#endif

#endif // ___MCL_MC30SF_H___
