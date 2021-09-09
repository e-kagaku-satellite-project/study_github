/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1779
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED1 aliases
#define LED1_TRIS                 TRISBbits.TRISB0
#define LED1_LAT                  LATBbits.LATB0
#define LED1_PORT                 PORTBbits.RB0
#define LED1_WPU                  WPUBbits.WPUB0
#define LED1_OD                   ODCONBbits.ODB0
#define LED1_ANS                  ANSELBbits.ANSB0
#define LED1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED1_GetValue()           PORTBbits.RB0
#define LED1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONBbits.ODB0 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONBbits.ODB0 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISBbits.TRISB1
#define LED2_LAT                  LATBbits.LATB1
#define LED2_PORT                 PORTBbits.RB1
#define LED2_WPU                  WPUBbits.WPUB1
#define LED2_OD                   ODCONBbits.ODB1
#define LED2_ANS                  ANSELBbits.ANSB1
#define LED2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED2_GetValue()           PORTBbits.RB1
#define LED2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONBbits.ODB1 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONBbits.ODB1 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/