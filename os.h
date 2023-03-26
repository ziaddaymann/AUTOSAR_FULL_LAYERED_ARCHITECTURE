  /******************************************************************************
 *
 * [FILE NAME]: <os.h>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <03/11/2023>
 *
 * [DESCRIPTION]: <Header file for OS Scheduler>
 *
 *******************************************************************************/
#ifndef OS_H_
#define OS_H_

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* Timer counting time in ms */
#define TIMER_BASE 20


/*************************************************
*           API  Functions Prototype
**************************************************/

/************************************************************************************
* Service Name: Os_start
* Reentrancy: Non-Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Intialize the System .
************************************************************************************/
void Os_start(void);

/************************************************************************************
* Service Name: Os_Scheduler
* Reentrancy: Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Scheduler Task.
************************************************************************************/
void Os_Scheduler(void);

/************************************************************************************
* Service Name: OS_Timer_Reschedule
* Reentrancy: Reentrant 
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: This function is a timer tick handler for a software timer in an operating system.
************************************************************************************/
void OS_Timer_Reschedule(void);

/******************************************************************************/
#endif /* OS_H_ */