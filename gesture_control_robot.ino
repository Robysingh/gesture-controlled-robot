/* HANDGESTURE ROBOT:------------------------------------------------------------
              SINGH ROBY KARAN - 5EELE                                         |
              LA COMUNICAZIONE GESTUALE                                        |
                                                                               |
Valori di X e Y rilevati in base ai movimenti gestuali:                        |
   –     320 < X > 380   340 < Y > 395   -       STOP                          |
  –>     300 < X > 395   375 < Y > 435   -       DESTRA                        |
  /\     280 < X > 340   340 < Y > 395   -       AVANTI                        |
  <–     300 < X > 395   280 < Y > 325   -       SINNISTRA                     |
  V      380 < X > 430   340 < Y > 395   -       INDIETRO                      |
                                                                               |
-------------------------------------------------------------------------------
*/


// INIZIALIZZAZIONE DELLE VARIABILI

int xPin=A0;    // pin per valori di X
int yPin=A1;    // pin per valori di Y

int out1=9;     //output1 per HT12E IC
int out2=10;    //output2 per HT12E IC
int out3=11;    //output3 per HT12E IC
int out4=12;    //output4 per HT12E IC


// SETUP
void setup(){

  Serial.begin (2400);

  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);

  pinMode(out1,OUTPUT);   //pin comando motori
  pinMode(out2,OUTPUT);   //pin comando motori
  pinMode(out3,OUTPUT);   //pin comando motori
  pinMode(out4,OUTPUT);   //pin comando motori

} // fine della procedura


//LOOP

void loop()
{
  //procedura per leggere i valori di X e Y
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);

  Serial.print("x= ");
  Serial.println (xval);
  Serial.print("y= ");
  Serial.println (yval);

  //delay(2000);


  //procedura per comandare i motori
  if ((xval>320 && xval<380) && (yval>340 && yval<395)) //stop
  {
    delay (100);
    digitalWrite(out1,LOW);
    digitalWrite(out2,LOW);
    digitalWrite(out3,LOW);
    digitalWrite(out4,LOW);
  }

  else
  {
       if ((xval>280 && xval<340) && (yval>340 && yval<395)) //avanti
           {
             delay (100);
             digitalWrite(out1,LOW);
             digitalWrite(out2,HIGH);
             digitalWrite(out3,HIGH);
             digitalWrite(out4,LOW);
             }

        if ((xval>380 && xval<430) && (yval>340 && yval<395)) //indietro
            {
             delay (100);
             digitalWrite(out1,HIGH);
             digitalWrite(out2,LOW);
             digitalWrite(out3,LOW);
             digitalWrite(out4,HIGH);
             }

        if ((xval>300 && xval<395) && (yval>375 && yval<435)) //sinistra
             {
              delay (100);
              digitalWrite(out1,HIGH);
              digitalWrite(out2,LOW);
              digitalWrite(out3,LOW);
              digitalWrite(out4,LOW);
             }


        if ((xval>300 && xval<395) && (yval>280 && yval<325)) //destra
             {
               delay (100);
               digitalWrite(out1,LOW);
               digitalWrite(out2,LOW);
               digitalWrite(out3,LOW);
               digitalWrite(out4,HIGH);
             }

  }   // fine della procedura else

}     // fine della procedura LOOP
