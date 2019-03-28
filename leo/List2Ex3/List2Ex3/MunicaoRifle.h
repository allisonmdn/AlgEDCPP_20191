#pragma once
#include "Municao.h"
class MunicaoRifle :
	public Municao
{
public:
	MunicaoRifle();
	~MunicaoRifle();
private:
	int projeteis = 10;
};

