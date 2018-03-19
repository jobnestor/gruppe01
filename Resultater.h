#if !defined(__RESULTATER_H)
#define __RESULTATER_H
#include "const.h"

class Resultater {
private:
	char dato[DATOLEN];
	int hMaal, bMaal;			// antall scoringer hjemme og borte
	bool normalTid;				// om kampen gikk p� overtid/straffe eller ikke
	int hScorere[SPILLERLAG];	// nr p� spillere som scoret hjemme
	int bScorere[SPILLERLAG];	// -||- borte
public:
	// lag inmaten
};
#endif
