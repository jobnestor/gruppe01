// Johannes Borgen, Sam Roen, Job Nestor Bahner.
//  Beste prosjektoppgava ever, never, forever.

//************************* INCLUDER ******************************************
#include <iostream>
#include "GlobaleFunksjoner.h"
#include "Spillere.h"
#include "Idrettene.h"
using namespace std;

Spillere spillere;
Idrettene idrettene;

//************************* HOVEDPROGRAMMET ************************************
int main () {
    char ch;
	lesFraFil();           // Kjorer Spillere.lesFraFil og Idrettene.lesFraFil
    skrivMeny();

	cout << "\nKommando: ";
    ch = lesKommando();

while (ch != 'Q') {
    switch(ch)    {
        case 'S':    {   spillere.skrivSpillere();   break; }   //  Alle Spiller(ne) med nr / navn
        case 'I':    {   idrettene.skrivIdrettene();   break; }   //  Alle Idrettene eller Idrett med navn
        case 'N':    {   ny();   break; }   //  Ny Spiller, Div. / Avd.
        case 'F':    {   ;   break; }   //  Fjern spiller, Idrett, Div./ Avd.
        case 'L':    {   ;   break; }   //  Skrive terminListe for Div. / Avd.
        case 'K':    {   ;   break; }   //  Skriv Res.(idr. || D/A) (S/F)
        case 'T':    {   ;   break; }   //  Skriv tabeller til idr. || D/A (S/F)
        case 'R':    {   ;   break; }   //  Lese resultatliste fra fil
        case 'D':    {   ;   break; }   //  Data om alle spillere paa ett lag
        case 'E':    {   ;   break; }   //  Redigere spiller(e) paa ett lag
        case 'C':    {   ;   break; }   //  top 10 Scorere for D/A/L til S/F
        default:     {
            skrivMeny();
            break;
        }   //  Skriver meny om alt gikk galt.
    }
	cout << "\nKommando: ";
	ch = lesKommando();
}
skrivTilFil();
   return 0;
}
