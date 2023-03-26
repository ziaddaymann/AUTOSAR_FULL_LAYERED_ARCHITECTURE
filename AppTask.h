  /******************************************************************************
 *
 * [FILE NAME]: <AppTask.h>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <03/11/2022>
 *
 * [DESCRIPTION]: <Header file for Tasks>
 *
 *******************************************************************************/



#ifndef APP_H_
#define APP_H_

/* Standard AUTOSAR types */
#include "Std_Types.h"


/*************************************************
*           API  Functions Prototype
**************************************************/

/************************************************************************************
* Service Name: Init_Task
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (im): None
* Parameters (out): None
* Return value: None
* Description: Intialize Port , Dio Drivers & Can Bus
************************************************************************************/
void Init_Task(void);

/************************************************************************************
* Service Name: Button_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Fuctions To check Buttons state 

************************************************************************************/
void Button_Task(void);  

/************************************************************************************
* Service Name: Led_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Fuctions To check Led state 

************************************************************************************/
void Led_Task(void);

/************************************************************************************
* Service Name: App_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Task Executes every 60MS function to change the Leds color according to the Switches State 
*********************************************************************************************************/
void App_Task(void);

/******************************************************************************/
#endif /* APP_H_ */