//************************************************************************************************************
// FILE: scanner.c
//
// DESCRIPTION
//
// AUTHOR
// John J. Hritz (John.Hritz@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
//************************************************************************************************************
#include "scanner.h"
#include "systick.h"
#include "pushb.h"

typedef enum
{
	scanner_up = 0,
	scanner_down = 1
}scanner_dir_t;

scanner_dir_t scanner_dir = scanner_up;

led_logic_t led_logic = led_logic_pos;

static uint32_t	scanner_pos = 0;
static uint32_t	systick_counter = 0;

void systick_callback(uint32_t p_count __attribute__((unused)))
{
	SYST_CSR;
	systick_counter++;
	
	if(systick_counter >= (current_period_ms/25))
	{
		systick_counter = 0;
		scanner_next();
	}
}

void scanner_next()
{
	if(scanner_dir == scanner_up)
	{
		if(scanner_pos == 9)
		{
			scanner_dir = scanner_down;
			scanner_pos--;
		}
		else
		{
			scanner_pos++;
		}
	}
	
	else
	{
		if(scanner_pos == 0)
		{
			scanner_dir = scanner_up;
			scanner_pos++;
		}
		else
		{
			scanner_pos--;
		}
	}
	
	led_all_off(led_logic, 10);
	led_on(led_logic, scanner_pos);
}
