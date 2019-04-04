#pragma once
#include "Personagem.h"
#include<string>

using namespace std;

class Ranger :
	public Personagem
{
public:
	Ranger();
	~Ranger();
	string Atirar();
	string pegarFlecha();


private:
	int flechas = 5;
};

