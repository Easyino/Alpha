/*
    /////////////|||\\\\\\\\\\\\\\\
   ||| Easyino - Official Sketch |||
    \\\\\\\\\\\\\|||///////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per il comando del microfono.
    maggiori informazioni presso https://github.com/Easyino/Alpha
    
*/

#include <alpha.h>  //includiamo la libreria 
Easy alpha(Alpha);    //nominiamo scheda la nostra scheda "alpha", e le diamo le assegnamo le caratteristichedi Alpha



void setup() {}  

void loop()
{
    if(alpha.ascolta()){    //controllo se sento un battito
        alpha.accendi(VERDE);   //accendo il led verde
        alpha.aspetta(1000);    //aspetto un secondo
        }
    else{
    alpha.accendi(ROSSO);   //accendo il led rosso
    }    
}
