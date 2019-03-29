#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();
	string GloriaDomini();
private:
	int espadas;
	int escudos;
};

