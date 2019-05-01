#include "Arma.h"



Arma::Arma()
{
}


Arma::~Arma()
{
}

string Arma::atirar()
{
	if (pente > 0) 
	{
		return string("Atirando...");
		pente--;
	}
	else
	{
		return string("Sem municao...");
	}
}

string Arma::recarregar(int qtdBalas)
{
	pente += qtdBalas;

	return string("Recarregando...");
}




