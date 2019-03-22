#pragma once
#include "personagem.h"
class guerreiro:
	public personagem
{
public:
	guerreiro();
	~guerreiro();

	string quemSoul() override;
};

