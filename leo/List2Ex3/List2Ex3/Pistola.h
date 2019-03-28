#pragma once
#include <string>
#include "Arma.h"
class Pistola :
	public Arma
{
public:
	Pistola();
	~Pistola();
	string atirar() override;
	string recarregar(int projeteis) override;

};

