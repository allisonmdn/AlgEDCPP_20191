#include "Mago.h"



Mago::Mago()
{
}


Mago::~Mago()
{
}

std::string Mago::quemSoul()
{
	
	return Personagem::quemSoul();
}

void Mago::defineNome(std::string s)
{
	this->nome = Personagem::obtemLogin();
}

