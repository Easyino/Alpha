/*
    //////////////////|||\\\\\\\\\\\\\\\\\\\\
   ||| Easyino - Education Official Sketch |||
    \\\\\\\\\\\\\\\\\\|||////////////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per il comando del led.
    
    La funzione su cui si basa questo esempio è "scheda.accendi()".
    Al suo interno può ricevere:
    * il nome del colore(solo per i più comuni)          Es: scheda.accendi("rosso");
    * le tre intensità che compongono lo spettro rgb     Es: scheda.accendi(0,100,255);
    
*/

#include <alpha.h>  //includiamo la libreria Easyino.h
Easy scheda(true);    //nominiamo scheda la nostra scheda "Easyino-Education"

int tempo = 1000; //la variabile tempo contiene il valore -1000-

void setup() {}   //noi non dobbiamo scrivere nulla in questa funzione

void loop()
{
  scheda.accendi("rosso");      //accendiamo il led rosso
  scheda.aspetta(tempo);        //aspettiamo 1000 millisecondi, ovvero 1 secondo
  scheda.accendi("verde");      //accendiamo il led verde
  scheda.aspetta(tempo);        //aspettiamo 1000 millisecondi
  scheda.accendi("blu");        //accendiamo il led blu
  scheda.aspetta(tempo);        //aspettiamo 1000 millisecondi
  scheda.accendi(255,255,255);  //impostiamo i tre led alla massima luminosità
  scheda.aspetta(1000);         //aspettiamo 1000 millisecondi.
}
