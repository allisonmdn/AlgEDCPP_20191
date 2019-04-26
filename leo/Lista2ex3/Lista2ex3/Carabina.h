#pragma once
#include "Arma.h"
class Carabina :
	public Arma
{
public:
	Carabina();
	~Carabina();
	void disparar();
	void recarregar(Municao *municao);
protected:
	Municao *municao;
};

