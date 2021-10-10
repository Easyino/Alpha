
/*
	    //////////////////|||\\\\\\\\\\\\\\\\\\\\
 	   ||| Easyino - Education Official Sketch |||
 	    \\\\\\\\\\\\\\\\\\|||////////////////////
  Easyino.cpp - Library for using our inboard components in the best way
  Created by Federico Longhin, Mattia Pilotto, Edoardo Baggio 03 April, 2020.
  Manteined by Federico Longhin & Mattia Pilotto.
  V 0.3
*/
//generale
#define led_R 9
#define led_G 10
#define led_B 11

#include "alpha.h"
#include "Arduino.h"
#include <EEPROM.h>
#include <SPI.h>
int soglia_microfono = 105;

int modello_scheda = 0;


Easy::Easy(int sc) {


  modello_scheda = sc;

  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
}

void Easy::aspetta( int d)
{
  delay(d);
}

void Easy::boot() {

  tone(3, 988, 50);
  delay(100);
  tone(3, 1976, 50);
  delay(100);
  tone(3, 3951, 50);
  delay(100);
}
//led RGB
void Easy::accendi( int r, int g, int b)
{
  analogWrite(led_R, r);
  analogWrite(led_G, g);
  analogWrite(led_B, b);
}

void Easy::accendi(char* colore)
{
#define n_colori 6 //ci sono 3 colori salvati
  char* lista_colori[] = {"rosso", "verde", "blu", "giallo", "bianco", "rosa"};
  int ton_rosso[] = {255, 0, 0, 255, 255, 255};
  int ton_giallo[] = {0, 255, 0, 255, 255, 0};
  int ton_blu[] = {0, 0, 255, 0, 255, 255};
  for (int c = 0; c < n_colori; c++) {
    if (colore == lista_colori[c]) {
      Serial.println(lista_colori[c]);
      analogWrite(led_R, ton_rosso[c]);
      analogWrite(led_G, ton_giallo[c]);
      analogWrite(led_B, ton_blu[c]);
    }
  }
}

//microfono
bool Easy::ascolta() {
#define buffer_mic 10
  if (analogRead(microfono) > (soglia_microfono + buffer_mic) || analogRead(microfono) < (soglia_microfono - buffer_mic)) {
    return true;
  }
  else return false;
}

void Easy::calibraMicrofono(int so) {
  soglia_microfono = so;
}


//fotoresistenza
int livello_luce_salvato;

void Easy::registraLuce() {
  livello_luce_salvato = analogRead(fotoresistenza);
}

int Easy::livelloLuce() {
  return analogRead(fotoresistenza);
}

//buzz
#define DO  523
#define RE  587
#define MI  659
#define FA  698
#define SOL  784
#define LA  880
#define SI  988
#define PAUSA 1

void Easy::suona(char* nota, int durata) {
  if (nota != "PAUSA") {
    tone(buzz, nota, durata);
  }
}

void Easy::suonaMelodia(char* note[100], int durate[100]) {
  int k;
  for ( k = 0; note[k] != 0; k++) {}

  Serial.println(k);
  for (int d = 0; d < k; d++) {
    if (note[d] != PAUSA) {
      tone(3, note[d], durate[d]);
    }

    delay(durate[d]);
  }
}

bool P1Premuto, P2Premuto, P3Premuto, P4Premuto;
void Easy::controllaPulsanti() {
  P3Premuto = !analogRead(A4);
  P1Premuto = !analogRead(A5);
  P4Premuto = !digitalRead(8);
  P2Premuto = !digitalRead(12);
}
