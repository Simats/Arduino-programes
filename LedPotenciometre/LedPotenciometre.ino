/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                      LedPotenciometre                       **
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
 /*llegim el valor del potenciometre dividim el valor del potenciometre 
 entre 4 ja que només es poden fer servir valors entre 0 i 255 en 
 analog Write  */
  brillo = analogRead (pot) / 4; 
  /*analogWrite rep dos valors, el pin a utilitzar i l'intensitat del voltatge, 
  els valors de voltatge van de 0 a 255*/
  analogWrite(led, brillo);

}


//************************ FUNCIONS *****************************
