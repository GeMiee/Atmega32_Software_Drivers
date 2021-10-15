#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"

#include"../../MCAL/DIO/DIO_interface.h"

#include"OPTO_interface.h"
#include"OPTO_private.h"
#include"OPTO_config.h"

//For switching off the Optocoupler
void OPTO_voidCutOffMode(u8 Copy_u8OPTOPort,u8 Copy_u8OPTOPin)
{
	DIO_voidSetPinDirection(Copy_u8OPTOPort,Copy_u8OPTOPin,OUTPUT);
	DIO_voidSetPinValue(Copy_u8OPTOPort,Copy_u8OPTOPin,LOW);
}

//For switching on the Optocoupler
void OPTO_voidSatMode(u8 Copy_u8OPTOPort,u8 Copy_u8OPTOPin)
{
	DIO_voidSetPinDirection(Copy_u8OPTOPort,Copy_u8OPTOPin,OUTPUT);
	DIO_voidSetPinValue(Copy_u8OPTOPort,Copy_u8OPTOPin,HIGH);
}
