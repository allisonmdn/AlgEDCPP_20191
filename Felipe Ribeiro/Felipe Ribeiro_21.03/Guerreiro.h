#pragma once
#include "Personagem.h"

class Guerreiro: public Personagem
{
public:
	Guerreiro();
	~Guerreiro();
	std::string quemSoul()override;


};

