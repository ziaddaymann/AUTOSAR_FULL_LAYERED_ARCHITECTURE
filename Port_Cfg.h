  /******************************************************************************
 *
 * [FILE NAME]: <Port_Cfg.h>
 *
 * [AUTHOR]: <Ziad Ayman>
 *
 * [DATE CREATED]: <03/11/2022>
 *
 * [DESCRIPTION]: <Header file for Pre Compile Confg>
 *
 *******************************************************************************/
 
 
#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION (1U)
#define PORT_CFG_SW_MINOR_VERSION (0U)
#define PORT_CFG_SW_PATCH_VERSION (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT (STD_ON)

#define PORT_PIN_IN                           (0U)
#define PORT_PIN_OUT                          (1U)

/* Number of the configured Port Channels */
#define PORT_CONFIGURED_CHANNLES              (39U)

/*Pre-compile to enable / disable the use of the function 
Port_SetPinDirection()   */
#define PORT_SET_PIN_DIRECTION_API            (STD_ON)

/* Pre-compile to enable / disable the use of the function 
Port_SetPinMode(). */
#define PORT_SET_PIN_MODE_API                 (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API (STD_OFF)

/* The default direction of pin when it's not DIO_INITIALIZED */
#define PORT_PIN_DIRECTION                    (PORT_PIN_OUT)

/* Parameter to indicate if the direction is changeable on a port pin during 
runtime */
#define PORT_PIN_DIRECTION_CHANGEABLE         (STD_OFF)

/* Parameter to indicate if the direction is mode on a port pin during 
runtime */
#define PORT_PIN_MODE_CHANGEABLE              (STD_OFF)

/*internal resistor state*/
#define PORT_PIN_PULL_OFF_RESISTOR            (uint8)0
#define PORT_PIN_PULL_UP_RESISTOR             (uint8)1
#define PORT_PIN_PULL_DOWN_RESISTOR           (uint8)2

/*Port Channels Level values */
#define PORT_PIN_Level_LOW                    (uint8)0
#define PORT_PIN_Level_HIGH                   (uint8)1


/************************************************************************/
/* PORTA Configured Channel ID's */
#define PortConf_PORTA_PIN0_ID (Port_PinType)0
#define PortConf_PORTA_PIN1_ID (Port_PinType)1
#define PortConf_PORTA_PIN2_ID (Port_PinType)2
#define PortConf_PORTA_PIN3_ID (Port_PinType)3
#define PortConf_PORTA_PIN4_ID (Port_PinType)4
#define PortConf_PORTA_PIN5_ID (Port_PinType)5
#define PortConf_PORTA_PIN6_ID (Port_PinType)6
#define PortConf_PORTA_PIN7_ID (Port_PinType)7

/* PORTB Configured Channel ID's */
#define PortConf_PORTB_PIN0_ID (Port_PinType)0
#define PortConf_PORTB_PIN1_ID (Port_PinType)1
#define PortConf_PORTB_PIN2_ID (Port_PinType)2
#define PortConf_PORTB_PIN3_ID (Port_PinType)3
#define PortConf_PORTB_PIN4_ID (Port_PinType)4
#define PortConf_PORTB_PIN5_ID (Port_PinType)5
#define PortConf_PORTB_PIN6_ID (Port_PinType)6
#define PortConf_PORTB_PIN7_ID (Port_PinType)7

/* PORTC Configured Channel ID's */
#define PortConf_PORTC_PIN0_ID (Port_PinType)0
#define PortConf_PORTC_PIN1_ID (Port_PinType)1
#define PortConf_PORTC_PIN2_ID (Port_PinType)2
#define PortConf_PORTC_PIN3_ID (Port_PinType)3
#define PortConf_PORTC_PIN4_ID (Port_PinType)4
#define PortConf_PORTC_PIN5_ID (Port_PinType)5
#define PortConf_PORTC_PIN6_ID (Port_PinType)6
#define PortConf_PORTC_PIN7_ID (Port_PinType)7

/* PORTD Configured Channel ID's */
#define PortConf_PORTD_PIN0_ID (Port_PinType)0
#define PortConf_PORTD_PIN1_ID (Port_PinType)1
#define PortConf_PORTD_PIN2_ID (Port_PinType)2
#define PortConf_PORTD_PIN3_ID (Port_PinType)3
#define PortConf_PORTD_PIN4_ID (Port_PinType)4
#define PortConf_PORTD_PIN5_ID (Port_PinType)5
#define PortConf_PORTD_PIN6_ID (Port_PinType)6
#define PortConf_PORTD_PIN7_ID (Port_PinType)7

/* PORTE Configured Channel ID's */
#define PortConf_PORTE_PIN0_ID (Port_PinType)0
#define PortConf_PORTE_PIN1_ID (Port_PinType)1
#define PortConf_PORTE_PIN2_ID (Port_PinType)2
#define PortConf_PORTE_PIN3_ID (Port_PinType)3
#define PortConf_PORTE_PIN4_ID (Port_PinType)4
#define PortConf_PORTE_PIN5_ID (Port_PinType)5

/* PORTF Configured Channel ID's */
#define PortConf_PORTF_PIN0_ID (Port_PinType)0
#define PortConf_PORTF_PIN1_ID (Port_PinType)1 /* Led 1*/
#define PortConf_PORTF_PIN2_ID (Port_PinType)2
#define PortConf_PORTF_PIN3_ID (Port_PinType)3
#define PortConf_PORTF_PIN4_ID (Port_PinType)4 /* SW1 */

/**************************************************************************/
/* Ports configured ID's*/
#define PortConf_PORTA_ID (Port_PortType)0
#define PortConf_PORTB_ID (Port_PortType)1
#define PortConf_PORTC_ID (Port_PortType)2
#define PortConf_PORTD_ID (Port_PortType)3
#define PortConf_PORTE_ID (Port_PortType)4
#define PortConf_PORTF_ID (Port_PortType)5

/**************************************************************************/
/* Channel Index in the array of structures in Port_PBcfg.c */

#define PortConf_PORTA_PIN0_ID_INDEX (uint8)0
#define PortConf_PORTA_PIN1_ID_INDEX (uint8)1
#define PortConf_PORTA_PIN2_ID_INDEX (uint8)2
#define PortConf_PORTA_PIN3_ID_INDEX (uint8)3
#define PortConf_PORTA_PIN4_ID_INDEX (uint8)4
#define PortConf_PORTA_PIN5_ID_INDEX (uint8)5
#define PortConf_PORTA_PIN6_ID_INDEX (uint8)6
#define PortConf_PORTA_PIN7_ID_INDEX (uint8)7

#define PortConf_PORTB_PIN0_ID_INDEX (uint8)8
#define PortConf_PORTB_PIN1_ID_INDEX (uint8)9
#define PortConf_PORTB_PIN2_ID_INDEX (uint8)10
#define PortConf_PORTB_PIN3_ID_INDEX (uint8)11
#define PortConf_PORTB_PIN4_ID_INDEX (uint8)12
#define PortConf_PORTB_PIN5_ID_INDEX (uint8)13
#define PortConf_PORTB_PIN6_ID_INDEX (uint8)14
#define PortConf_PORTB_PIN7_ID_INDEX (uint8)15

#define PortConf_PORTC_PIN0_ID_INDEX (uint8)16
#define PortConf_PORTC_PIN1_ID_INDEX (uint8)17
#define PortConf_PORTC_PIN2_ID_INDEX (uint8)18
#define PortConf_PORTC_PIN3_ID_INDEX (uint8)19
#define PortConf_PORTC_PIN4_ID_INDEX (uint8)20
#define PortConf_PORTC_PIN5_ID_INDEX (uint8)21
#define PortConf_PORTC_PIN6_ID_INDEX (uint8)22
#define PortConf_PORTC_PIN7_ID_INDEX (uint8)23

#define PortConf_PORTD_PIN0_ID_INDEX (uint8)24
#define PortConf_PORTD_PIN1_ID_INDEX (uint8)25
#define PortConf_PORTD_PIN2_ID_INDEX (uint8)26
#define PortConf_PORTD_PIN3_ID_INDEX (uint8)27
#define PortConf_PORTD_PIN4_ID_INDEX (uint8)28
#define PortConf_PORTD_PIN5_ID_INDEX (uint8)29
#define PortConf_PORTD_PIN6_ID_INDEX (uint8)30
#define PortConf_PORTD_PIN7_ID_INDEX (uint8)31

#define PortConf_PORTE_PIN0_ID_INDEX (uint8)32
#define PortConf_PORTE_PIN1_ID_INDEX (uint8)33
#define PortConf_PORTE_PIN2_ID_INDEX (uint8)34
#define PortConf_PORTE_PIN3_ID_INDEX (uint8)35
#define PortConf_PORTE_PIN4_ID_INDEX (uint8)36
#define PortConf_PORTE_PIN5_ID_INDEX (uint8)37

#define PortConf_PORTF_PIN0_ID_INDEX (uint8)38
#define PortConf_PORTF_PIN1_ID_INDEX (uint8)39 /*Led 1 */
#define PortConf_PORTF_PIN2_ID_INDEX (uint8)40
#define PortConf_PORTF_PIN3_ID_INDEX (uint8)41
#define PortConf_PORTF_PIN4_ID_INDEX (uint8)42 /*SW1 */

/**************************************************************************/
/*Port Channels modes */
#define PORT_PIN_MODE_DIO    (uint8)1
#define PORT_PIN_MODE_ADC    (uint8)2
#define PORT_PIN_MODE_UART   (uint8)3
#define PORT_PIN_MODE_SSI    (uint8)4
#define PORT_PIN_MODE_I2C    (uint8)5
#define PORT_PIN_MODE_M0PWM  (uint8)6
#define PORT_PIN_MODE_M1PWM  (uint8)7
#define PORT_PIN_MODE_CAN    (uint8)8








#endif /* PORT_CFG_H */