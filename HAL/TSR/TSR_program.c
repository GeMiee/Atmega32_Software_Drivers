#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"

#include"../../MCAL/DIO/DIO_interface.h"

#include"TSR_interface.h"
#include"TSR_private.h"
#include"TSR_config.h"

//For switching off the transistor
void TSR_voidCutOffMode(u8 Copy_u8TSRPort,u8 Copy_u8TSRPin)
{
	DIO_voidSetPinDirection(Copy_u8TSRPort,Copy_u8TSRPin,OUTPUT);
	DIO_voidSetPinValue(Copy_u8TSRPort,Copy_u8TSRPin,LOW);
}

//For switching on the transistor
void TSR_voidSatMode(u8 Copy_u8TSRPort,u8 Copy_u8TSRPin)
{
	DIO_voidSetPinDirection(Copy_u8TSRPort,Copy_u8TSRPin,OUTPUT);
	DIO_voidSetPinValue(Copy_u8TSRPort,Copy_u8TSRPin,HIGH);
}
