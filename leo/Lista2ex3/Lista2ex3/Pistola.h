#pragma once
#include "Arma.h"
class Pistola :
	public Arma
{
public:
	Pistola();
	~Pistola();
	void disparar();
	void recarregar(Municao *municao);
protected:
	Municao *municao;
};