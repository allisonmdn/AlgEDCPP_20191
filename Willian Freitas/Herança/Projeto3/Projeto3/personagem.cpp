#include "personagem.h"



string personagem::obtemLogin()
{
	return this->login;
}

personagem::personagem()
{
}


personagem::~personagem()
{
}

string personagem::mover()
{
	return "movendo";
}

string personagem::quemSoul()
{
	return "Ninguem";
}

string personagem::getNome()
{
	return nome;
}
