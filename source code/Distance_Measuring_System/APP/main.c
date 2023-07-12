/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: fathy
 */
#include "../LIBRARY/errorState.h"
#include"../LIBRARY/stdTypes.h"
#include"../MCAL/DIO/DIO_int.h"


#include"../HAL/LCD/LCD_int.h"

#include "../MCAL/GIE/GIE_int.h"
#include "../MCAL/EXTI/EXTI_int.h"
#include "../HAL/ULTRASONIC_SENSOR/ULTRASONIC_SENSOR_int.h"

#include<util/delay.h>
int main(){
	GIE_voidEnable();
	ULTRASONIC_SENSOR_voidInit();
	LCD_voidInit();
	LCD_voidWriteString("Distance=    cm");

	while(1){
	u16 dis=ULTRASONIC_SENSOR_u16ReadDistance();


		LCD_voidGoToPosition(0,10);
		LCD_voidWritInteger(dis);

	    	_delay_ms(1000);
	}
}
