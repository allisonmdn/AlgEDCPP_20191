#include "Mago.h"



Mago::Mago()
{
	pv = 5;
	pm = 30;
	mov = 5;
	posicao = 0;
	ca = 5;
	classeNome = "Mago";
}


Mago::~Mago()
{
}

void Mago::mover()
{
	cout << "Movendo!\n";
	posicao += mov;
}

void Mago::lancarMagia()
{
	cout << "Lancando magia!\n";
	pm -= 5;
}
