#pragma once
#include "Municao.h"
class MunicaoCarabina :
	public Municao
{
public:
	MunicaoCarabina();
	~MunicaoCarabina();
protected:
	int projeteis = 30;
};

