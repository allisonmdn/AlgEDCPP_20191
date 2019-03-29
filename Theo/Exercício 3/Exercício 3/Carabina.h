#pragma once
#include "Arma.h"

class Carabina :
	public Arma
{
public:
	Carabina();
	~Carabina();
	string atirar() override;
	string recarregar(int qtdBalas) override;
};

