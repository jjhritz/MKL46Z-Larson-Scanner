//************************************************************************************************************
// FILE: pushb.c
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#include "pushb.h"
#include "port.h"
#include "gpio.h"

static bool_t pb2_pressed = false;
uint32_t current_period_ms = 500;

void pushb_init()
{	
	//Configure PTC7,10 for input
	gpioc_pddr_config(7, GPIO_PDDR_IN);
	gpioc_pddr_config(10, GPIO_PDDR_IN);
	
	//Configure Push Button pins using the following parameters
	//(1) ISF = 1 to clear any pending interrupt requests; 
	//(2) IRQC = 0b1010 to watch for a falling edge; 
	//(3) MUX = 0b001 to configure the pin's function to be GPIO; 
	//(4) DSE = x since the pin is being configured as an input pin it does not matter what DSE is; 
	//(5) PFE = 0 to disable the internal passive filter; 
	//(6) SRE = 0 to select fast slew rate; 
	//(7) PE = 1 to enable the internal pullup or pulldown resistor;
	//(8) PS = 1 to enable the internal pullup resistor
	
	PORT_PCR(PORT_C, 7) = 0x010A0103;
	PORT_PCR(PORT_C, 10) = 0x010A0103;
}

void pushb1_callback()
{
	if(!pb2_pressed)
	{
		if(current_period_ms == 875)
		{
			current_period_ms = 125;
			SYST_CSR;
		}
	
		else
		{
			current_period_ms += 125;
			SYST_CSR;
		}
	}
}

void pushb2_callback()
{
	if(!pb2_pressed)
	{
		//Toggle systick so it stops throwing interrupts
		systick_cfg_int_state(systick_int_disabled);
		pb2_pressed = true;
	}
	else
	{
		pb2_pressed = false;
		systick_cfg_int_state(systick_int_enabled);
	}
}

void pushb_portc_debounce(int p_pin)
{
    uint32_t signal = 1;
    uint16_t state = 0x0000;
    do 
    {
        state = (state << 1) | signal | 0xE000;
        signal = (~GPIOC_PDIR >> p_pin) & 0x01;
    } 
    while (state != 0xF000);

}
