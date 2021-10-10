/*
    /////////////|||\\\\\\\\\\\\\\\
   ||| Easyino - Official Sketch |||
    \\\\\\\\\\\\\|||///////////////

    sketch dimostrativo per capire come si utilizzano le funzioni per il comando del buzzer.
    maggiori informazioni presso https://github.com/Easyino/Alpha
    
*/

#include <alpha.h>  //includiamo la libreria 
Easy alpha(Alpha);    //nominiamo scheda la nostra scheda "alpha", e le diamo le assegnamo le caratteristichedi Alpha

 int note[7] = {DO, RE, MI, FA, SOL, LA, SI};	//creo l'array di note
 int durate[7] = {100,200,300,400,500,600,700};	//creo l'array di durate


void setup() {


 alpha.suonaMelodia(note, durate);		//suono la melodia.

}  

void loop()
{}
