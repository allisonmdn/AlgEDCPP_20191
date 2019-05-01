#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

std::string Personagem::mover()
{
	return std::string("Movendo");
}

std::string Personagem::quemSou()
{
	return "Ninguem";
}

std::string Personagem::getNome()
{
	return nome;
}

std::string Personagem::obtemLogin()
{
	return login;
}
