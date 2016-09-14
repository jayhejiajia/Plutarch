#include "../include/led.h"

#include "mraa.h"


#define POWER_PIN 13
#define LED_ON 1
#define LED_OFF 0


int PowerLenBlink(int nCount)
{	
	int bReturn = 1 ;
	int i = 0 ;
	mraa_gpio_context d_pin = NULL;
	d_pin = mraa_gpio_init(13);

	if(d_pin)
	{

		if (mraa_gpio_dir(d_pin, MRAA_GPIO_OUT) != MRAA_SUCCESS) {
			fprintf(stderr, "Can't set digital pin as output, exiting");
			return 0;
		};

		for(i = 0 ;i < nCount ;i++)
		{
			mraa_gpio_write(d_pin, LED_OFF);
			sleep(1);
			mraa_gpio_write(d_pin, LED_ON);
			sleep(1);
		}

		mraa_gpio_write(d_pin, LED_OFF);
	}else 
	{
		fprintf(stderr, "MRAA couldn't initialize GPIO, exiting");
		bReturn = 0 ;
	}

	return bReturn ;
}
