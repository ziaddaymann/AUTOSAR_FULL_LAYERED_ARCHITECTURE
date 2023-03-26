 /******************************************************************************
 *
 * Module: LED
 *
 * File Name: Led.h
 *
 * Description: Header file to Initilaze Leds.
 *
 * Author: Ziad Ayman
 *
 *******************************************************************************/

#ifndef _H_LED_H
#define _H_LED_H

#include "Std_Types.h"

/* Set the led ON/OFF according to its configuration Positive logic or negative logic */
#define LED_ON  STD_HIGH
#define LED_OFF STD_LOW

/* Description: Set the LED state to ON */
void LED_setOn(void);

/* Description: Set the LED state to OFF */
void LED_setOff(void);

/*Description: Toggle the LED state */
void LED_toggle(void);

/* Description: Refresh the LED state */
void LED_refreshOutput(void);

#endif