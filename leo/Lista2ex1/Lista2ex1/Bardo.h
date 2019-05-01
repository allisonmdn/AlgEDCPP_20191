#pragma once
#include "Arqueiro.h"
class Bardo :
	public Arqueiro
{
public:
	Bardo();
	~Bardo();
	string FlechaMelodica();
private:
	int instrumentos;
};

