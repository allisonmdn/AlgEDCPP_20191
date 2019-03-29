#pragma once
#include "guerreiros.h"
class paladino :
	public guerreiros
{
public:
	paladino();
	~paladino();

	void setForcaEspiritual(int ForcaEspiritual) { forcaEspiritual = ForcaEspiritual; }
	int getForcaEspiritual() { return forcaEspiritual; }

protected:
	int forcaEspiritual;
};

