/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                        Potenciometre                        **
**                                                             **
**   NOM: Marc Simats                         Data:23/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);   // declara el pin del LED com a sortida
}


//*************************** LOOP ******************************

void loop() {
   digitalWrite(ledPin, HIGH);  // engega el LED 
   delay(analogRead(potPin));   // Llegeix el valor del potenciometre
   digitalWrite(ledPin, LOW);   // Apaga el LED 
   delay(analogRead(potPin));

}


//************************ FUNCIONS *****************************
