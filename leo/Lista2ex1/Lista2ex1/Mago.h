#pragma once
#include "Personagem.h"
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();
	string LancaFogo();
	string Relampago();
	string LancaGelo();
private:
	int podeFlu;
};

