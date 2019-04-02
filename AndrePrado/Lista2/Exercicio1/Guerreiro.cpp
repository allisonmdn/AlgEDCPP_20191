#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	pv = 15;
	mov = 5;
	ca = 7;
	forca = 10;
	posicao = 0;
	classeNome = "Guerreiro";
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::setNome(string n)
{
	nome = n;
}

void Guerreiro::mover()
{
	posicao += mov;
	cout << "Movendo!\n";
}

void Guerreiro::atacar(int caInimigo)
{
	cout << "Atacando!\n";
	caInimigo -= forca;
}

int Guerreiro::defender(int ataqueInimigo)
{
	if (ca - ataqueInimigo < 0) {
		cout << "Defendendo!\n";

		pv -= (ca - ataqueInimigo);
		cout << "Sofreu dano!n";
	}
	else {
		cout << "Não sofre dano!\n";
	}
	return 0;
}
