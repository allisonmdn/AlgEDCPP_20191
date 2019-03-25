#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

string Personagem::atacar()
{
	return string("Atacando...");
}

string Personagem::defender()
{
	return string("Defendendo...");
}

string Personagem::mover()
{
	return string("Movendo...");
}

string Personagem::agachar()
{
	return string("Agachando...");
}

string Personagem::pular()
{
	return string("Pulando...");
}
