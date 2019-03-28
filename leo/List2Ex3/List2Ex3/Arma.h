#pragma once
#include <string>
#include "Municao.h"
#include "MunicaoPistola.h"
#include "MunicaoRifle.h"
#include "MunicaoCarabina.h"
#include "Atirador.h"


using namespace std;

class Arma
{
public:
	Arma();
	~Arma();
	virtual string atirar();
	virtual string recarregar(int projeteis);

protected:
	int pente = 0;
	Municao *municoes[3]{ new MunicaoPistola, new MunicaoRifle, new MunicaoCarabina };
	Atirador *leo2 = new Atirador;

};

