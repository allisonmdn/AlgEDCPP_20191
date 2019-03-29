#pragma once
#include "Personagem.h"
class Clerigo :
	public Personagem
{
public:
	Clerigo();
	~Clerigo();
	string feDivina();

private:
	int aguaBenta;
};

