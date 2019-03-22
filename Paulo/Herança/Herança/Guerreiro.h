#pragma once
#include "Personagem.h"
class Guerreiro :
	public Personagem{
public:
	Guerreiro();
	~Guerreiro();

	string quemSou() override;
};

