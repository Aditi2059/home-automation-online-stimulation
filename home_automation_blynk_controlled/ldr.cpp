#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
void brightness_control(void)
{
  unsigned short inputVal;
  
  inputVal = analogRead(LDR_SENSOR);
  /*scale it down from (0 to 1023) to (0 to 255)*/
  inputVal = inputVal/4;
  
  inputVal = 255 - inputVal;

  analogWrite (GARDEN_LIGHT, inputVal);

  delay(100);
}
