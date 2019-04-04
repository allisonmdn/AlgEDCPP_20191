#pragma once
#include "municao.h"
#include <string>

using namespace std;

class arma
{
public:
	arma();
	~arma();

	string atirar();
	string recarregar(int balas);
	int getEspacoPente();
	int getPente() { return pente; }

protected:
	int tamanhoPente, pente, sobra;
};