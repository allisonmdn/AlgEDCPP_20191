#include "Pistola.h"



Pistola::Pistola()
{
}


Pistola::~Pistola()
{
}

string Pistola::atirar()
{
	if (pente > 0) {
		pente -= 1;
		return string("ta ta tum pistola");
	}
	else if (pente == 0) {
		return string("sem municao de pistola");
	}

}

string Pistola::recarregar(int projeteis)
{
	pente += projeteis;
	return string("recarregou pistola");
}
