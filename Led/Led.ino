/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                             LED                             **
**                                                             **
**   NOM: Marc Simats                         Data:23/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT); // posa el pin 2 com a sortida

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);   // posa el pin 2 a nivell alt
  delay(500);              // pausa mig segon
  digitalWrite(2, LOW);    // posa el pin 2 a nivell baix
  delay(500);              // pausa mig segon

}


//************************ FUNCIONS *****************************
