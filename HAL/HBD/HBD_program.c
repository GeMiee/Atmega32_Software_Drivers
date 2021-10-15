#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"

#include"../../MCAL/DIO/DIO_interface.h"

#include"HBD_interface.h"
#include"HBD_private.h"
#include"HBD_config.h"


//For using the H-bridge for motor in counter clockwise rotation
void HBD_voidCCW(u8 Copy_HBDPort1,u8 Copy_HBDPort2,u8 Copy_HBDPin1,u8 Copy_HBDPin2)
{
	DIO_voidSetPinDirection(Copy_HBDPort1,Copy_HBDPin1,OUTPUT);
	DIO_voidSetPinDirection(Copy_HBDPort2,Copy_HBDPin2,OUTPUT);
	DIO_voidSetPinValue(Copy_HBDPort1,Copy_HBDPin1,HIGH);
	DIO_voidSetPinValue(Copy_HBDPort2,Copy_HBDPin2,LOW);
}

//For using the H-bridge for motor in clockwise rotation
void HBD_voidCW(u8 Copy_HBDPort1,u8 Copy_HBDPort2,u8 Copy_HBDPin1,u8 Copy_HBDPin2)
{
	DIO_voidSetPinDirection(Copy_HBDPort1,Copy_HBDPin1,OUTPUT);
	DIO_voidSetPinDirection(Copy_HBDPort2,Copy_HBDPin2,OUTPUT);
	DIO_voidSetPinValue(Copy_HBDPort1,Copy_HBDPin1,LOW);
	DIO_voidSetPinValue(Copy_HBDPort2,Copy_HBDPin2,HIGH);
}
