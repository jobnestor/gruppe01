#if !defined(__IDRETT_H)
#define __IDRETT_H
#include "enum.h"
#include "ListTool2B.h"

class Idrett : public TextElement	{
private:
	char* navn;            // Idrettsnavnet, text element (sortert)
	tabelltype tbTp;       // tabelltype

public:
	void display();
};
#endif
