#include "GlobaleFunksjoner.h"
#include "Spillere.h"
#include "Idrettene.h"
#include <iostream>			//cout, cin
#include <fstream>			//ifstream, ofstream
#include <cctype>			//toupper
#include <cstring>			//strlen
using namespace std;

extern Spillere spillere;
extern Idrettene idrettene;

//*************************GLOBALE FUNKSJONSDEFINISJONER************************
void skrivMeny()	{			//	Skriver Meny i main
	cout << "S A | <nr> | <navn> - skriv Alle"
	 	 << "Spillerne eller spiller med <nr> / <navn>\n";
	cout << "I A | <navn> - skriv Alle Idrettene eller idretten med <navn> \n";
	cout <<	"N S | I | D - Ny Spiller, Idrett eller Divisjon/avdeling \n";
	cout <<	"F S | I | D - Fjern Spiller, Idrett eller Divisjon/avdeling \n";
	cout << "L - skriv terminListe for en gitt divisjon/avdeling"
	 	 <<	 "til skjerm eller fil \n";
	cout <<	"K - skriv (resultatet av) alle Kampene en gitt dato"
	 	 << "for en hel idrett eller en divisjon/avdeling til skjerm eller fil\n";
	cout << "T - skriv Tabell(er) for en hel idrett eller en"
	 	 << "divisjon/avdeling til skjerm eller fil\n";
    cout << "R - lese Resultatliste inn fra fil\n";
	cout << "D - Data om alle spillerne paa et lag\n";
	cout << "E - Endre/redigere (spillerne paa et lag)\n";
	cout << "C - skriv 10-paa-topp liste av toppsCorerne for en gitt"
		 << "divisjon/avdeling eller et gitt lag til skjerm eller fil\n";
}

char lesKommando()	{				// Leser kommando ti switch i main
	char ch;
	cin >> ch;
	return toupper(ch);
}

void lesFraFil()	{			//	Inneholder Spillere.LesFraFil og Idrettene
	ifstream inn("IDRETTENE.DTA");
	ifstream innfil("SPILLERE.DTA");

	if(inn)	{
		idrettene.lesFraFil();
	}	else	{
		cout << "Kunne ikke lese fra filen \"IDRETTENE.DTA\"\n";
	}

	if(innfil)	{
		spillere.lesFraFil();
	}	else	{
		cout << "Kunne ikke lese fra filen\"SPILLERE.DTA\'\n";
	}


}
void skrivTilFil()	{				//	Inneholder Spillere.SkrivTilFil og Idrettene
}

void ny()	{					//	Funksjon med switch til valg av nytt obj.
	char ch;
	cout << "Ny Idrett, Divisjon eller spiller? (I, D, S):\t";
	ch = lesKommando();
	if(ch != 'Q')	{
		switch(ch)		{
			case 'I':	{	idrettene.nyIdrett();		break;	}
			case 'D':	{	idrettene.nyDiv();	break;	}
			case 'S':	{	spillere.nySpiller();     	break;	}
		}
	}
}
								//  Leser inn en tekst:
void les(const char* t, char* s, const int LEN) {
	do {
		cout << '\t' << t << ": ";	//  Skriver ledetekst.
		cin.getline(s, LEN);		//  Leser inn tekst.
	} while (strlen(s) == 0);		//  Sjekker at tekstlengden er ulik 0.
}
