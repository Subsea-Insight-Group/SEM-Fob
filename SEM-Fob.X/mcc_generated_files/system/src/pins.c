/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 1.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../pins.h"

static void (*BAT_MON_InterruptHandler)(void);
static void (*SCL_InterruptHandler)(void);
static void (*SDA_InterruptHandler)(void);
static void (*SWITCH_InterruptHandler)(void);
static void (*ACC_INT1_InterruptHandler)(void);
static void (*ACC_INT2_InterruptHandler)(void);
static void (*LED_ON_InterruptHandler)(void);
static void (*PSU_EN_InterruptHandler)(void);

void PIN_MANAGER_Initialize()
{

  /* OUT Registers Initialization */
    PORTA.OUT = 0x0;
    PORTB.OUT = 0x0;
    PORTC.OUT = 0x2;

  /* DIR Registers Initialization */
    PORTA.DIR = 0x0;
    PORTB.DIR = 0x1;
    PORTC.DIR = 0x6;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x9;
    PORTA.PIN2CTRL = 0x9;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x9;
    PORTA.PIN5CTRL = 0x0;
    PORTA.PIN6CTRL = 0x0;
    PORTA.PIN7CTRL = 0x0;
    PORTB.PIN0CTRL = 0x0;
    PORTB.PIN1CTRL = 0x0;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x0;
    PORTC.PIN1CTRL = 0x0;
    PORTC.PIN2CTRL = 0x0;
    PORTC.PIN3CTRL = 0x0;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;

  /* PORTMUX Initialization */
    PORTMUX.CTRLA = 0x0;
    PORTMUX.CTRLB = 0x0;
    PORTMUX.CTRLC = 0x0;
    PORTMUX.CTRLD = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    BAT_MON_SetInterruptHandler(BAT_MON_DefaultInterruptHandler);
    SCL_SetInterruptHandler(SCL_DefaultInterruptHandler);
    SDA_SetInterruptHandler(SDA_DefaultInterruptHandler);
    SWITCH_SetInterruptHandler(SWITCH_DefaultInterruptHandler);
    ACC_INT1_SetInterruptHandler(ACC_INT1_DefaultInterruptHandler);
    ACC_INT2_SetInterruptHandler(ACC_INT2_DefaultInterruptHandler);
    LED_ON_SetInterruptHandler(LED_ON_DefaultInterruptHandler);
    PSU_EN_SetInterruptHandler(PSU_EN_DefaultInterruptHandler);
}

/**
  Allows selecting an interrupt handler for BAT_MON at application runtime
*/
void BAT_MON_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    BAT_MON_InterruptHandler = interruptHandler;
}

void BAT_MON_DefaultInterruptHandler(void)
{
    // add your BAT_MON interrupt custom code
    // or set custom function using BAT_MON_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for SCL at application runtime
*/
void SCL_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SCL_InterruptHandler = interruptHandler;
}

void SCL_DefaultInterruptHandler(void)
{
    // add your SCL interrupt custom code
    // or set custom function using SCL_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for SDA at application runtime
*/
void SDA_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SDA_InterruptHandler = interruptHandler;
}

void SDA_DefaultInterruptHandler(void)
{
    // add your SDA interrupt custom code
    // or set custom function using SDA_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for SWITCH at application runtime
*/
void SWITCH_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SWITCH_InterruptHandler = interruptHandler;
}

void SWITCH_DefaultInterruptHandler(void)
{
    // add your SWITCH interrupt custom code
    // or set custom function using SWITCH_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for ACC_INT1 at application runtime
*/
void ACC_INT1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    ACC_INT1_InterruptHandler = interruptHandler;
}

void ACC_INT1_DefaultInterruptHandler(void)
{
    // add your ACC_INT1 interrupt custom code
    // or set custom function using ACC_INT1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for ACC_INT2 at application runtime
*/
void ACC_INT2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    ACC_INT2_InterruptHandler = interruptHandler;
}

void ACC_INT2_DefaultInterruptHandler(void)
{
    // add your ACC_INT2 interrupt custom code
    // or set custom function using ACC_INT2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_ON at application runtime
*/
void LED_ON_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_ON_InterruptHandler = interruptHandler;
}

void LED_ON_DefaultInterruptHandler(void)
{
    // add your LED_ON interrupt custom code
    // or set custom function using LED_ON_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PSU_EN at application runtime
*/
void PSU_EN_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PSU_EN_InterruptHandler = interruptHandler;
}

void PSU_EN_DefaultInterruptHandler(void)
{
    // add your PSU_EN interrupt custom code
    // or set custom function using PSU_EN_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTA.INTFLAGS & PORT_INT5_bm)
    {
       BAT_MON_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT1_bm)
    {
       SWITCH_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT2_bm)
    {
       ACC_INT1_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT4_bm)
    {
       ACC_INT2_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTB.INTFLAGS & PORT_INT0_bm)
    {
       SCL_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT1_bm)
    {
       SDA_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT1_bm)
    {
       LED_ON_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT2_bm)
    {
       PSU_EN_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

/**
 End of File
*/