  /******************************************************************************
 *
 * [FILE NAME]: <AppTask.c>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <03/11/2022>
 *
 * [DESCRIPTION]: <Source file for Tasks>
 *
 *******************************************************************************/

#include "AppTask.h"
#include "Port.h"
#include "Button.h"
#include "Led.h"
#include "Dio.h"

/************************************************************************************
* Service Name: Init_Task
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (im): None
* Parameters (out): None
* Return value: None
* Description: Intialize Port , Dio Drivers & Can Bus
************************************************************************************/
void Init_Task(void)
{
    /* Initialize Port Driver */
    Port_Init(&Port_Configuration); 
      
    /* Initialize DIO Driver */
    Dio_Init(&Dio_Configuration); 
}


/************************************************************************************
* Service Name: Button_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Fuctions To check Buttons state 

************************************************************************************/
void Button_Task(void)
{
    Button_Current_State();
}

/************************************************************************************
* Service Name: Led_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Fuctions To check Led state 

************************************************************************************/
void Led_Task(void)
{
    LED_refreshOutput();
}


/************************************************************************************
* Service Name: App_Task
* Reentrancy: reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Task Executes every 40MS function to change the Leds color according to the Switches State 
*********************************************************************************************************/
void App_Task(void)
{
  /* Variables to reade Sw1 Current & Prervious state*/
    static uint8 button_previous_state = BUTTON_RELEASED;
     static uint8 button_current_state  = BUTTON_RELEASED;

    
    /* Read the SW1 state */
    button_current_state = BUTTON_getState();

    /* Only Toggle the led in case the current state of the switch is pressed
     * and the previous state is released */ 
    if((button_current_state == BUTTON_PRESSED) && (button_previous_state == BUTTON_RELEASED))
    {
	LED_toggle();
    }
	
    button_previous_state = button_current_state;
}
