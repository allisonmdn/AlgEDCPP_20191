#include "Ladino.h"



Ladino::Ladino()
{
	pv = 10;
	mov = 10;
	ca = 5;
	forca = 7;
	posicao = 0;
	classeNome = "Ladino";
}


Ladino::~Ladino()
{
}

void Ladino::mover()
{
	cout << "Movendo!\n";
	posicao += mov;
}

void Ladino::atacarPorcostas(int pvInimigo)
{
	cout << "Ataque furtivo\n";
	pvInimigo -= forca;
}

void Ladino::pungar()
{
	cout << "Bantendo carteira!\n";
	po += rand() % 100 + 1;
}
