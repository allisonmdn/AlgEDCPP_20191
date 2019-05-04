#include "Municao.h"



Municao::Municao()
{
	this->projeteis = 0;
}


Municao::~Municao()
{
}

void Municao::diminuiProjeteis()
{
	this->projeteis -= 1;
}

void Municao::setProjeteis(int proj)
{
	this->projeteis = proj;
}

int Municao::getProjeteis()
{
	return this->projeteis;
}
