#include "Spiller.h"
#include "GlobaleFunksjoner.h"
#include <iostream>
using namespace std;

void skriv()	{		 // Funksjon som skriver EN spiller sin data

}

Spiller::Spiller()	{                  // Konstruktor

}
Spiller::Spiller(int nr)
{
}
Spiller::~Spiller() {                  // Dekonstruktor
	delete[] navn;            // Sletter navn og frigjor memory
	delete[] adresse;         // Sletter adresse
}

void Spiller::skriv(){
}
