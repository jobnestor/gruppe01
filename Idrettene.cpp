#include "Idrettene.h"
#include "GlobaleFunksjoner.h"
#include "ListTool2B.h"
extern List* idrettListe;

// 					IDRETTENES FUNKSJONSDEFINISJONER
Idrettene::Idrettene()	{
	idrettListe = new List(Sorted);
}

void Idrettene::skrivIdrettene()		{			//skriv Alle Idrettene eller idretten med <navn>
	for(int i = 0; i < (idrettListe->noOfElements()); i++)	{

	}
}

void Idrettene::nyIdrett()			{			//Lager en ny idrett

}
void Idrettene::nyDiv()		{			//Lager en nu dovosjon

}
void Idrettene::lesFraFil()	{			//Leser alle idrettene fra fil

}
void Idrettene::skrivTilFil() {			//Skriver alle idrettene til fil

}
