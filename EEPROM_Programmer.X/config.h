#ifndef CONFIG_H
    #define	CONFIG_H

    // CONFIG1
    #pragma config FOSC = INTOSC    // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
    #pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
    #pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
    #pragma config MCLRE = OFF      // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
    #pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
    #pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
    #pragma config BOREN = OFF      // Brown-out Reset Enable (Brown-out Reset disabled)
    #pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
    #pragma config IESO = OFF       // Internal/External Switchover (Internal/External Switchover mode is disabled)
    #pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is disabled)

    // CONFIG2
    #pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
    #pragma config VCAPEN = OFF     // Voltage Regulator Capacitor Enable (All VCAP pin functionality is disabled)
    #pragma config PLLEN = ON       // PLL Enable (4x PLL enabled)
    #pragma config STVREN = OFF     // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will not cause a Reset)
    #pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
    #pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

    // #pragma config statements should precede project file includes.
    // Use project enums instead of #define for ON and OFF.

    #include <xc.h>
    #define _XTAL_FREQ 32000000
    void init(void);

#endif