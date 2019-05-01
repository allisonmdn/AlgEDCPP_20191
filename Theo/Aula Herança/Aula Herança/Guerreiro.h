#pragma once
#include"Personagem.h"
#include<string>

using namespace std;

class Guerreiro : 
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();
	
	string quemSou() override;
};

