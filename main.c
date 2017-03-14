#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
  DDRB = 0b00000010; 
  while (1)
  {
    PORTB = 0b00000010;
	_delay_ms(100);
	PORTB = 0b00000000;
	_delay_ms(100);
  }
  
  return 1;
  
}