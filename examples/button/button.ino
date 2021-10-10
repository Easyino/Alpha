/*
    /////////////|||\\\\\\\\\\\\\\\
   ||| Easyino - Official Sketch |||
    \\\\\\\\\\\\\|||///////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per la gestione dei pulsanti.
    maggiori informazioni presso https://github.com/Easyino/Alpha
    
*/

#include <alpha.h>  //includiamo la libreria 
Easy alpha(Alpha);    //nominiamo scheda la nostra scheda "alpha", e le diamo le assegnamo le caratteristichedi Alpha



void setup() {
    Serial.begin(115200);
}  

void loop()
{
    alpha.controllaPulsanti();  //aggiorno lo stato dei pulsanti

    if(alpha.P1Premuto){        //controllo se il pulsante 1 è premuto
        alpha.accendi(ROSSO);
    }    

    if(alpha.P2Premuto){        //controllo se il pulsante 2 è premuto
        alpha.accendi(VERDE);
    }

    if(alpha.P3Premuto){        //controllo se il pulsante 3 è premuto
        alpha.accendi(BLU);
    }    

    if(alpha.P4Premuto){        //mi faccio una spremuta di melanzane... non è vero, controllo se il pulsante 4 è premuto
        alpha.accendi(ROSA);
    }

}
