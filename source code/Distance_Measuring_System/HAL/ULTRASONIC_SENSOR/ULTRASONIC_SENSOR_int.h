/*
 * ULTRASONIC_SENSOR_int.h
 *
 *  Created on: Jul 7, 2023
 *      Author: fathy
 */

#ifndef HAL_ULTRASONIC_SENSOR_ULTRASONIC_SENSOR_INT_H_
#define HAL_ULTRASONIC_SENSOR_ULTRASONIC_SENSOR_INT_H_

void ULTRASONIC_SENSOR_voidInit(void);

/*
 * Description:
 * 1. Send the Trigger pulse to the ultrasonic.
 */
void ULTRASONIC_SENSOR_voidTrigger(void);

/*
 * Description:
 * 1. Send the trigger pulse by using Ultrasonic_Trigger function.
 * 2. Start the measurements by the ICU from this moment.
 * 3. return the measured distance in Centimeter.
 */
u16 ULTRASONIC_SENSOR_u16ReadDistance(void);

/*
 * Description:
 * 1. This is the call back function called by the ICU driver.
 * 2. This is used to calculate the high time (pulse time) generated by
 *    the ultrasonic sensor.
 */
void ULTRASONIC_SENSOR_voidEdgeProcessing(void);




#endif /* HAL_ULTRASONIC_SENSOR_ULTRASONIC_SENSOR_INT_H_ */
