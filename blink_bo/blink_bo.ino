/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                            BLINK                            **
**                                                             **
**   NOM: Marc Simats                         Data:23/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); // Declares pin desitjat com a sortida

}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // encen el LED. HIGH és el nivell de tensió
  delay(1000);                       // esperar un segon
  digitalWrite(LED_BUILTIN, LOW);    // apagar el LED fen baixar la tensió
  delay(1000);                       // esperar un segon

}


//************************ FUNCIONS *****************************
