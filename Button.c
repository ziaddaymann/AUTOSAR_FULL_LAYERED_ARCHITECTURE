 /******************************************************************************
 *
 * Module: Button
 *
 * File Name: Button.c
 *
 * Description: Source file to Initilaze Buttons.
 *
 * Author: Ziad Ayman
 *
 *******************************************************************************/

#include "Dio.h"
#include "Button.h"


/* Global variables to hold the button states */
static uint8 buttonStateSW = BUTTON_RELEASED;

/************************************************************************************
* Service Name: BUTTON_getState
* Reentrancy: Non-reentrant
* Parameters (in): None
* Parameters (out): Switch 1 State
* Return value: None
* Description: Returns the current state of switch 1
*********************************************************************************************************/
uint8 BUTTON_getState(void)
{
    return buttonStateSW;
}

/************************************************************************************
* Service Name: Button_Current_State
* Reentrancy: Non-reentrant
* Parameters (in): None
* Parameters (out): None
* Return value: None
* Description: Updates the state of switch 1 using debouncing to ensure reliable button presses
*********************************************************************************************************/
void Button_Current_State(void)
{
    /* Counter to track debouncing */
    static uint8 debounceCounter = 0;

    /* Get the current state of the button */
    uint8 currentState = Dio_ReadChannel(DioConf_SW1_CHANNEL_ID_INDEX);

    /* If the current state is the same as the previous state, reset the debounce counter */
    if (currentState == buttonStateSW)
    {
        debounceCounter = 0;
    }
    /* If the current state is different from the previous state, increment the debounce counter */
    else
    {
        debounceCounter++;
        /* If the debounce counter has reached the threshold, update the button state and reset the debounce counter */
        
        if (debounceCounter >= BUTTON_DEBOUNCE_THRESHOLD)
        {
            buttonStateSW = currentState;
            debounceCounter = 0;
        }
    }
}
