#include "guerreiros.h"



guerreiros::guerreiros()
{
}


guerreiros::~guerreiros()
{
}

string guerreiros::atacar(int ataque)
{
	if (ataque == 1) {
		return "estrangulando";
	}
	else if (ataque == 2) {
		return "apunhalando";
	}
	else if (ataque == 3) {
		return "espancando";
	}
}

string guerreiros::defender()
{
	return "defendendo";
}
