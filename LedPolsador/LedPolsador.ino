/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                         LedPolsador                         **
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
  pinMode(4, INPUT); // posa el pin 4 com a entrada
}


//*************************** LOOP ******************************

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4)){
    digitalWrite(2, HIGH);   // posa el pin 2 a nivell alt
  }else{
  digitalWrite(2, LOW);    // posa el pin 2 a nivell baix

}


//************************ FUNCIONS *****************************
