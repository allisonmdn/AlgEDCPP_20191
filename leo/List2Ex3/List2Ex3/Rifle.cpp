#include "Rifle.h"



Rifle::Rifle()
{
}


Rifle::~Rifle()
{
}

string Rifle::atirar()
{
	if (pente>0) {
		pente -= 1;
		return string("ta ta tum rifle");
	}
	else if (pente == 0) {
		return string("sem municao de rifle");
	}

}

string Rifle::recarregar(int projeteis)
{
	pente += projeteis;
	return string("recarregou rifle");
}
