#include <avr/io.h>
#include <util/delay.h> // to use delay function

int main(void)
{
	DDRD |= (1<<PD6); //configure pin 6 in PORTD as output pin

	PORTD |= (1<<PD6); // LED Off

    while(1)
    {
		PORTD = PORTD & (~(1<<PD6)); // LED ON
		_delay_ms(1000);
		PORTD = PORTD | (1<<PD6);    // LED OFF
		_delay_ms(1000);
		/************ Another Method *************
		PORTD = PORTD ^ (1<<PD6); // Toggle LED
		_delay_ms(1000);
		******************************************/
    }
}
