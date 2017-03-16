#include "global.h"
#include "gpio.h"
#include "port.h"
#include "systick.h"
#include "int.h"
#include "pushb.h"
#include "scanner.h"
#include "led.h"

#define forever for(;;)
	

void hardware_init()
{
	//mask all interrupts
	int_mask_all();
	
	//Enable SIM clock to ports A-D
	SIM_SCGC5 |= 0b1111 << 9;
	
	//initialize systick
	systick_init(systick_period_isr_25_ms, 
					systick_int_enabled, 
					systick_state_enabled, 
					systick_callback);

	//configure port pins for GPIO
	port_gpio_config(PORT_A, 1);
	port_gpio_config(PORT_A, 2);
	port_gpio_config(PORT_A, 4);
	port_gpio_config(PORT_A, 12);
	
	port_gpio_config(PORT_B, 18);
	port_gpio_config(PORT_B, 19);
	
	port_gpio_config(PORT_C, 0);
	port_gpio_config(PORT_C, 4);
	port_gpio_config(PORT_C, 6);
	
	port_gpio_config(PORT_D, 3);
	
	//initialize push button hardware
	pushb_init();
	
	//Configure pins for output
	gpioa_pddr_config(1, GPIO_PDDR_OUT);
	gpioa_pddr_config(2, GPIO_PDDR_OUT);
	gpioa_pddr_config(4, GPIO_PDDR_OUT);
	gpioa_pddr_config(12, GPIO_PDDR_OUT);
	
	gpiob_pddr_config(18, GPIO_PDDR_OUT);
	gpiob_pddr_config(19, GPIO_PDDR_OUT);
	
	gpioc_pddr_config(0, GPIO_PDDR_OUT);
	gpioc_pddr_config(4, GPIO_PDDR_OUT);
	gpioc_pddr_config(6, GPIO_PDDR_OUT);
	
	gpiod_pddr_config(3, GPIO_PDDR_OUT);
	
	//initialize interrupts for ports C and D (though we only need C)
	int_init(int_src_portscd, int_priority_1, int_state_enabled);
	
	led_on(led_logic, 0);
	
	//Unmask all interrupts
	int_unmask_all();
}

void sw_init()
{
	callback_init();
}

void run()
{
    // We have nothing else to do in this particular application, but if we did, we would do it here.
    forever 
    {
    	
    }
}

int main()
{
    hardware_init();
    sw_init();
    run();
    return 0;
}
