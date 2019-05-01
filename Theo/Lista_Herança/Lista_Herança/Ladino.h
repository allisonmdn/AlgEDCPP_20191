#pragma once
#include "Personagem.h"
#include<string>

using namespace std;

class Ladino :
	public Personagem
{
public:
	Ladino();
	~Ladino();
	string roubar();
	string esconder();

private:
	int furtividade;
};

