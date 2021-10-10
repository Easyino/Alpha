/*
    /////////////|||\\\\\\\\\\\\\\\
   ||| Easyino - Official Sketch |||
    \\\\\\\\\\\\\|||///////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per il comando del led.
    maggiori informazioni presso https://github.com/Easyino/Alpha
    
*/

#include <alpha.h>  //includiamo la libreria 
Easy alpha(Alpha);    //nominiamo scheda la nostra scheda "alpha", e le diamo le assegnamo le caratteristichedi Alpha

int tempo = 1000; //definiamo tempo come 1000

void setup() {}  

void loop()
{
  alpha.accendi(ROSSO);      //accendiamo il led rosso
  alpha.aspetta(tempo);        //aspettiamo 1000 millisecondi, ovvero 1 secondo
  alpha.accendi(ROSA);      //accendiamo il led rosa
  alpha.aspetta(tempo);        
  alpha.accendi(BLU);        //accendiamo il led blu
  alpha.aspetta(tempo);     
  alpha.accendi(255,255,255);  //impostiamo i tre led alla massima luminosità
  alpha.aspetta(1000);
}
