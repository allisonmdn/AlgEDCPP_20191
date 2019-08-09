#include "Jogador.h"



Jogador::Jogador()
{
	vida = 100;
	energia = 50;
}

Jogador::Jogador(int vida, int energia)
{
	this->vida = vida;
	this->energia = energia;

}


Jogador::~Jogador()
{
}

int Jogador::getVida()
{
	return vida;
}

int Jogador::getEnergia()
{
	return energia;
}

void Jogador::setVida(int vd)
{
	vida = vd;
}

void Jogador::setEnergia(int en)
{
	energia = en;
}
