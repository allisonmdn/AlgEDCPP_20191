#include "arma.h"
#include "municao.h"

using namespace std;

arma::arma()
{

}


arma::~arma()
{
}

string arma::atirar()
{
	pente -= 1;
	return "Atirando";
}

string arma::recarregar(int balas)
{
	pente += balas;

	return "recarregou o pente";
}

int arma::getEspacoPente()
{
	int espaco;
	espaco = tamanhoPente - pente;
	return espaco;
}
