//************************************************************************************************************
// FILE: led.c
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#include "led.h"

//Turns on the LED at Port B Pin n
void led_on(led_logic_t logic, uint32_t led_number)
{
	//if using positive logic (LED_LOGIC_POS)
	if(logic == led_logic_pos)
	{	
		switch(led_number)
		{
			case 0:
			{
				GPIOB_PDOR |= (1 << 18);
				break;
			}
			case 1:
			{
				GPIOA_PDOR |= (1 << 1);
				break;
			}
			case 2:
			{
				GPIOB_PDOR |= (1 << 19);
				break;
			}
			case 3:
			{
				GPIOA_PDOR |= (1 << 2);
				break;
			}
			case 4:
			{
				GPIOC_PDOR |= (1 << 0);
				break;
			}
			case 5:
			{
				GPIOD_PDOR |= (1 << 3);
				break;
			}
			case 6:
			{
				GPIOC_PDOR |= (1 << 4);
				break;
			}
			case 7:
			{
				GPIOA_PDOR |= (1 << 12);
				break;
			}
			case 8:
			{
				GPIOC_PDOR |= (1 << 6);
				break;
			}
			case 9:
			{
				GPIOA_PDOR |= (1 << 4);
				break;
			}
			default:
			{
				break;
			}
		}
	}
	//if using negative logic (LED_LOGIC_NEG)
	else
	{
		switch(led_number)
		{
			case 0:
			{
				GPIOB_PDOR &= ~(1 << 18);
				break;
			}
			case 1:
			{
				GPIOA_PDOR &= ~(1 << 1);
				break;
			}
			case 2:
			{
				GPIOB_PDOR &= ~(1 << 19);
				break;
			}
			case 3:
			{
				GPIOA_PDOR &= ~(1 << 2);
				break;
			}
			case 4:
			{
				GPIOC_PDOR &= ~(1 << 0);
				break;
			}
			case 5:
			{
				GPIOD_PDOR &= ~(1 << 3);
				break;
			}
			case 6:
			{
				GPIOC_PDOR &= ~(1 << 4);
				break;
			}
			case 7:
			{
				GPIOA_PDOR &= ~(1 << 12);
				break;
			}
			case 8:
			{
				GPIOC_PDOR &= ~(1 << 6);
				break;
			}
			case 9:
			{
				GPIOA_PDOR &= ~(1 << 4);
				break;
			}
			default:
			{
				break;
			}
		}
	}
}

//Turn on first led_number LEDs
void led_all_on(led_logic_t logic, uint32_t led_number)
{
	for(uint32_t i = 0; i < led_number; i++)
	{
		led_on(logic, i);
	}
}

//Turns off the LED at Port B Pin n
void led_off(led_logic_t logic, uint32_t led_number)
{
	//if using positive logic (LED_LOGIC_POS)
	if(logic == led_logic_pos)
	{
		switch(led_number)
		{
			case 0:
			{
				GPIOB_PDOR &= ~(1 << 18);
				break;
			}
			case 1:
			{
				GPIOA_PDOR &= ~(1 << 1);
				break;
			}
			case 2:
			{
				GPIOB_PDOR &= ~(1 << 19);
				break;
			}
			case 3:
			{
				GPIOA_PDOR &= ~(1 << 2);
				break;
			}
			case 4:
			{
				GPIOC_PDOR &= ~(1 << 0);
				break;
			}
			case 5:
			{
				GPIOD_PDOR &= ~(1 << 3);
				break;
			}
			case 6:
			{
				GPIOC_PDOR &= ~(1 << 4);
				break;
			}
			case 7:
			{
				GPIOA_PDOR &= ~(1 << 12);
				break;
			}
			case 8:
			{
				GPIOC_PDOR &= ~(1 << 6);
				break;
			}
			case 9:
			{
				GPIOA_PDOR &= ~(1 << 4);
				break;
			}
			default:
			{
				break;
			}
		}
	}
	//if using negative logic (LED_LOGIC_NEG)
	else
	{
		switch(led_number)
		{
			case 0:
			{
				GPIOB_PDOR |= (1 << 18);
				break;
			}
			case 1:
			{
				GPIOA_PDOR |= (1 << 1);
				break;
			}
			case 2:
			{
				GPIOB_PDOR |= (1 << 19);
				break;
			}
			case 3:
			{
				GPIOA_PDOR |= (1 << 2);
				break;
			}
			case 4:
			{
				GPIOC_PDOR |= (1 << 0);
				break;
			}
			case 5:
			{
				GPIOD_PDOR |= (1 << 3);
				break;
			}
			case 6:
			{
				GPIOC_PDOR |= (1 << 4);
				break;
			}
			case 7:
			{
				GPIOA_PDOR |= (1 << 12);
				break;
			}
			case 8:
			{
				GPIOC_PDOR |= (1 << 6);
				break;
			}
			case 9:
			{
				GPIOA_PDOR |= (1 << 4);
				break;
			}
			default:
			{
				break;
			}
		}
	}
}

//Turn off first n LEDs
void led_all_off(led_logic_t logic, uint32_t led_number)
{
	for(uint32_t i = 0; i < led_number; i++)
	{
		led_off(logic, i);
	}
}
