   /******************************************************************************
 *
 * [FILE NAME]: <SysTick.h>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <04/11/2022>
 *
 * [DESCRIPTION]: <Header file for Systick>
 *
 *******************************************************************************/


#ifndef GPT_H
#define GPT_H

#include "Std_Types.h"


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/************************************************************************************
* Service Name: SysTick_Start
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Tick_Time - Time in miliseconds
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the SysTick Timer configuration to count n miliseconds:
*              - Set the Reload value
*              - Enable SysTick Timer with System clock 16Mhz
*              - Enable SysTick Timer Interrupt and set its priority
************************************************************************************/	
void SysTick_Start(uint16 Tick_Time);

/************************************************************************************
* Service Name: SysTick_Stop
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Stop the SysTick Timer.
************************************************************************************/
void SysTick_Stop(void);

/************************************************************************************
* Service Name: SysTick_SetCallBack
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Ptr2Func - Call Back function address
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the SysTick Timer call back
************************************************************************************/
void SysTick_SetCallBack(void (*Ptr2Func)(void));

#endif /* GPT_H */