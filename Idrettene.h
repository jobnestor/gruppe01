#if !defined(__IDRETTENE_H)
#define __IDRETTENE_H
#include "ListTool2B.h"

class Idrettene	{
private:
	List * idrettListe;
public:
	Idrettene();
	void skrivIdrettene();			//skriv Alle Idrettene eller idretten med <navn>
	void nyIdrett();				//Ny Idrett skal lages
	void nyDiv();			//Ny divisjon skal lages
	void lesFraFil();		//Leser alle idretter fra fil
	void skrivTilFil();		//Skirver alle idretter til fil
};

#endif
