#include "tm4c123gh6pm.h"
#include "Macros.h"
#include "GPIO.h"
#include "SWITCH.h"
#include "LED.h"
int SystemInit(){};
int main(){
PORT_INT('f');
SWITCH_INT('F',0);
SWITCH_INT('F',4);
LED_INT('F',1);
LED_INT('F',2);
LED_INT('F',3);
	
while(1){
if(SWITCH_READ('f',0)==0){
LED_ON('F',1);
}
SET_PORT_DIR('f',0x0E);
SET_PORT_DATA('f',0x0E);
}


}