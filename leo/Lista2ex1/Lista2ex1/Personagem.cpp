#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

string Personagem::Atacar()
{
	return string("Atacando!");
}

string Personagem::Defender()
{
	return string("Defendendo!");
}

string Personagem::Mover()
{
	return string("Movendo!");
}

string Personagem::Agachar()
{
	return string("Agachado!");
}

string Personagem::Pular()
{
	return string("Pulando!");
}
