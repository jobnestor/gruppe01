//					KLASSEN SPILLERE

#if !defined (__SPILLERE_H)
#define __SPILLERE_H
#include "ListTool2B.h"


class Spillere	{   // Klasse Spillere
private:
	int number;
	List* spillerListe;
public:
	Spillere();
	void skrivSpillere();
	void nySpiller();
	void lesFraFil();
	void skrivTilFil();
};
#endif