/*
 * File:   newmain.c
 * Author: EduardoYan
 *
 * Created on 22 de Fevereiro de 2022, 13:05
 */

// PIC16F887 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (RB3/PGM pin has PGM function, low voltage programming enabled)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.



#define _XTAL_FREQ 16000000
#include <xc.h>


void DigitoMenosSignificativo(int numero);
void DigitoMaisSignificativo(int numero);

int contador1=0, contador2=0;

void main(void) {
    
    
    TRISC=0;
    PORTC=0;
    
    while(1){
        DigitoMaisSignificativo(contador2);
        DigitoMenosSignificativo(contador1);
        
        if(contador1<10){
            contador1++;
        }else{
            contador2++;
            contador1=0;
            
                    
        }
        __delay_ms(300);
        
    }
}  
    
    void DigitoMaisSignificativo(int numero){
        if (numero==0){
            RC3=0;
            RC2=0;
            RC1=0;
            RC0=0;
        }
        else if (numero==1){
            RC3=0;
            RC2=0;
            RC1=0;
            RC0=1;
        }
        else if (numero==2){
            RC3=0;
            RC2=0;
            RC1=1;
            RC0=0;
        }
        else if (numero==3){
            RC3=0;
            RC2=0;
            RC1=1;
            RC0=1;
        }
        else if (numero==4){
            RC3=0;
            RC2=1;
            RC1=0;
            RC0=0;
        }
        else if (numero==5){
            RC3=0;
            RC2=1;
            RC1=0;
            RC0=1;
        }
        else if (numero==6){
            RC3=0;
            RC2=1;
            RC1=1;
            RC0=0;
        }
        else if (numero==7){
            RC3=0;
            RC2=1;
            RC1=1;
            RC0=1;
        }
        else if (numero==8){
            RC3=1;
            RC2=0;
            RC1=0;
            RC0=0;
        }
        else if (numero==9){
            RC3=1;
            RC2=0;
            RC1=0;
            RC0=1;
        }else{
            RC3=0;
            RC2=0;
            RC1=0;
            RC0=0;
        }
    }
    
    void DigitoMenosSignificativo(int numero){
        if (numero==0){
            RC7=0;
            RC6=0;
            RC5=0;
            RC4=0;
        }
        else if (numero==1){
            RC7=0;
            RC6=0;
            RC5=0;
            RC4=1;
        }
        else if (numero==2){
            RC7=0;
            RC6=0;
            RC5=1;
            RC4=0;
        }
        else if (numero==3){
            RC7=0;
            RC6=0;
            RC5=1;
            RC4=1;
        }
        else if (numero==4){
            RC7=0;
            RC6=1;
            RC5=0;
            RC4=0;
        }
        else if (numero==5){
            RC7=0;
            RC6=1;
            RC5=0;
            RC4=1;
        }
        else if (numero==6){
            RC7=0;
            RC6=1;
            RC5=1;
            RC4=0;
        }
        else if (numero==7){
            RC7=0;
            RC6=1;
            RC5=1;
            RC4=1;
        }
        else if (numero==8){
            RC7=1;
            RC6=0;
            RC5=0;
            RC4=0;
        }
        else if (numero==9){
            RC7=1;
            RC6=0;
            RC5=0;
            RC4=1;
        }else{
            RC7=0;
            RC6=0;
            RC5=0;
            RC4=0;
        }
    }
    
    

