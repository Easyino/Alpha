/*
    /////////////|||\\\\\\\\\\\\\\\
   ||| Easyino - Official Sketch |||
    \\\\\\\\\\\\\|||///////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per il comando della fotoresistenza.
    maggiori informazioni presso https://github.com/Easyino/Alpha
    
*/

#include <alpha.h>  //includiamo la libreria 
Easy alpha(Alpha);    //nominiamo scheda la nostra scheda "alpha", e le diamo le assegnamo le caratteristichedi Alpha

int var;    //creo una variabile di nome var

void setup() {}  

void loop()
{
    var=alpha.livelloLuce(); //assegno a var il livello di luce attuale
    alpha.accendi(0,var,0);  //creo una scala di luce in base a var nel canale verde

}
