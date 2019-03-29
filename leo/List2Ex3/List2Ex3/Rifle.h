#pragma once
#include "Arma.h"
class Rifle :
	public Arma
{
public:
	Rifle();
	~Rifle();
	string atirar() override;
	string recarregar(int projeteis) override;
};

