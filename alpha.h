/*
	    //////////////////|||\\\\\\\\\\\\\\\\\\\\
 	   ||| Easyino - Education Official Sketch |||
 	    \\\\\\\\\\\\\\\\\\|||////////////////////
  Easyino.h - Library for using our inboard components in the best way
  Created by Federico Longhin, Mattia Pilotto, Edoardo Baggio 03 April, 2020.
  Manteined by Federico Longhin & Mattia Pilotto.
V 0.3
*/

#include <SPI.h>

//mapping dei pin della scheda
#define D1 7
#define D2 4
#define D3 3
#define D4 2
#define led_R 11
#define led_G 10
#define led_B 9
#define microfono A2
#define fotoresistenza A3
#define buzz 3
//note
#define DO  523
#define RE  587
#define MI  659
#define FA  698
#define SOL  784
#define LA  880
#define SI  988
#define PAUSA 1
//colori
#define ROSSO 1 
#define VERDE 2
#define BLU 3 
#define GIALLO 4
#define ROSA 5
#define ROSA 6

		//schede Easyino
#define Alpha 0

class Easy
{
  public:
   Easy(int sc);
void aspetta(int d);
void boot();

void accendi( int r, int g, int b);
void accendi(byte colore);

bool ascolta();
void calibraMicrofono(int so);

void registraLuce();
int livelloLuce();
int livello_luce_salvato;

void suona(char* nota, int durata);
void suonaMelodia(char* note[100],int durate[100]);

void controllaPulsanti();

bool P1Premuto;
bool P2Premuto;
bool P3Premuto;
bool P4Premuto;
};
