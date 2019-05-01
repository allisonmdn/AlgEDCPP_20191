#include "Carabina.h"



Carabina::Carabina()
{
}


Carabina::~Carabina()
{
}

string Carabina::atirar()
{
	if (pente > 0) {
		pente -= 1;
		return string("ta ta tum carabina");
	}
	else if (pente == 0) {
		return string("sem municao de carabina");
	}

}

string Carabina::recarregar(int projeteis)
{
	pente += projeteis;
	return string("recarregou carabina");
}
