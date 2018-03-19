//					KLASSEN SPILLER

#if !defined (__SPILLER_H)
#define __SPILLER_H
#include "ListTool2B.h"


class Spiller :public NumElement {
private:
	int number;                   // Spillerens unikt nummer
	char* navn;                   // Spillerens navn
	char* adresse;                // Spillerens adresse

public:
	Spiller();
	Spiller(int nr);              //
	~Spiller();
	void skriv();
};

#endif
