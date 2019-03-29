#pragma once
#include "feiticeiros.h"
class clerigo:
	public feiticeiros
{
public:
	clerigo();
	~clerigo();
	int getAguaBenta() { return aguaBenta; }
	void setAguaBenta(int Agua) { aguaBenta = Agua; }
	string rezar() { return "rezando"; }
	string jogarAguaBenta() { return "jogando aguda benta"; }

protected:
	int aguaBenta;
};

