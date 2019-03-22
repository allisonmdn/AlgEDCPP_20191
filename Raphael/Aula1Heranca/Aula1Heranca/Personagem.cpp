#include "Personagem.h"



std::string Personagem::obtemLogin()
{
	return this->login;
}

Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

std::string Personagem::mover()
{
	return "movendo";
}

std::string Personagem::quemSoul()
{
	return "Ninguem";
}

std::string Personagem::obtemNome()
{
	return this->nome;
}
