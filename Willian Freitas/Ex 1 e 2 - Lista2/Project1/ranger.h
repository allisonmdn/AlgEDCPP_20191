#pragma once
#include "guerreiros.h"
class ranger :
	public guerreiros
{
public:
	ranger();
	~ranger();

	void setFlechas(int Flechas) { flechas = Flechas; }
	int getFlechas() { return flechas; }
	string atirando() { return "atirando"; }

protected:
	int flechas;
};

