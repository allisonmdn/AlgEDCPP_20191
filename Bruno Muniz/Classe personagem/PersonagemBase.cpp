#include "PersonagemBase.h"
#include<iostream>

using namespace std;

PersonagemBase::PersonagemBase()
{
	vel = 0.2;
	x = 0;
	y = 0;
}


PersonagemBase::~PersonagemBase()
{
}

void PersonagemBase::setVida(int v)
{
	vida = v;
}


void PersonagemBase::getPosicao(float x, float y)
{

	this->x = x;
	this->y = y;

}

void PersonagemBase::setVelociade(float vel)
{
	this-> vel = vel;
}

void PersonagemBase::setvivo(bool v)
{
	this->v = v;
}

void PersonagemBase::moverDir()
{
	x += vel;
}

void PersonagemBase::moverEsq()
{
	x -= vel;
}

void PersonagemBase::moverCima()
{
	y -= vel;
}

void PersonagemBase::moverBaixo()
{
	y += vel;
}
