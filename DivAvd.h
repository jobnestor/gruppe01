#if !defined(__DIVAVD_H)
#define __DIVAVD_H
#include "ListTool2B.h"
#include "const.h"
#include "Lag.h"
#include "Resultater.h"

class DivAvd : public TextElement {
private:
	char* navn;
	int antallLag;
	Lag* lagene[MAXLAG];						// array med pekere til lagene i divisjonen/avdelingen
	Resultater* terminliste[MAXLAG][MAXLAG];	// to dimensjonal matrise med pekere til resultater objekter 
public:
	// lag inmaten
};

#endif
