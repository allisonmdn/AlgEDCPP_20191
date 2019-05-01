#pragma once
#include "Personagem.h"
class Bardo : public Personagem
{
public:
	Bardo();
	~Bardo();
	string tocar();
	
private:
	bool vontade;
};

