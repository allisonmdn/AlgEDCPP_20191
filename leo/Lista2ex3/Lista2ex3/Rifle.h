#pragma once
#include "Arma.h"
class Rifle :
	public Arma
{
public:
	Rifle();
	~Rifle();
	void disparar();
	void recarregar(Municao *municao);
protected:
	Municao *municao;
};