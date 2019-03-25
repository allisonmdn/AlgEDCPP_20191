#pragma once
#include "Guerreiro.h"
class Barbaro :
	public Guerreiro
{
public:
	Barbaro();
	~Barbaro();

	void entrarSairFuria() { furia = !furia; }

	bool getFuria() { return furia; }

private:
	bool furia;
};

