#pragma once
#include "Personagem.h"
#include<string>

using namespace std;
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();
	string quemSou() override;
	void defineNome(string);
};

