#include "Municao.h"



Municao::Municao()
{
	projeteis = 0;
}


Municao::~Municao()
{
}

void Municao::diminuiProjeteis()
{
	projeteis--;
}

void Municao::setProjeteis(int proj)
{
	projeteis = proj;
}
