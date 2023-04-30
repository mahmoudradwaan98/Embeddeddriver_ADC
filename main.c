/*
 * main.c
 *
 *  Created on: Feb 27, 2023
 *      Author: User
 */

#include "STD_TYPES.h"
#include "BIT_MATHS.h"

#include "DIO_interface.h"

void main(){

	/* Define pin A1 direction as input for switch */
	DIO_u8SetPinDirection(DIO_U8PORTA,DIO_U8PIN1,DIO_U8PIN_INPUT);

	/* Activate pull up resistor for pin A1 */
	DIO_u8SetPinValue(DIO_U8PORTA,DIO_U8PIN1, DIO_U8PIN_HIGH);

	/* Define pin A3 direction as output for led */
	DIO_u8SetPinDirection(DIO_U8PORTA,DIO_U8PIN3,DIO_U8PIN_OUTPUT);


	u8 Local_u8pinstate = 1;




	while(1){

		DIO_u8GetPinValue(DIO_U8PORTA,DIO_U8PIN1, &Local_u8pinstate);

		if(Local_u8pinstate==0){

			DIO_u8SetPinValue(DIO_U8PORTA,DIO_U8PIN3, DIO_U8PIN_HIGH);

		}

//		else {
//			DIO_u8SetPinValue(DIO_U8PORTA,DIO_U8PIN3, DIO_U8PIN_LOW);
//		}


	}



}

