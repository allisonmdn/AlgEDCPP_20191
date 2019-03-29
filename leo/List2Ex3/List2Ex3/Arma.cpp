#include "Arma.h"



Arma::Arma()
{
}


Arma::~Arma()
{
}

string Arma::atirar()
{
	if (pente>0) {
		pente -= 1;
		return string("atirando");
	}
	else if (pente == 0) {
		return string("sem municao");
	}
}

string Arma::recarregar(int projeteis)
{
	pente += projeteis;
	return string("recarregou");

}

