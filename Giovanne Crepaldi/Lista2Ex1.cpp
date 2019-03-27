#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "..\..\..\..\source\repos\Project54\Project54\Guerreiro.h"
#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	this->hp = 100;
	this->estamina = 50;
	this->escudo = false;
	this->arma = 10;
	this->armadura = 10;
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::luta()
{
	defineEstamina(-3);
	tomaDado();
	cout << "Lutando" << endl;
}

void Guerreiro::treina()
{
	defineEstamina(10);
	cout << "Treinando..." << endl;
}

void Guerreiro::morre()
{
		cout << "MORREU" << endl;

}


void Guerreiro::tomaDano()
{
	if (escudo)
		this->hp -= 5 / armadura;
	else
		this->hp -= 10 / armadura;
	
	if (this->hp <= 0) {
		morre();
		cout << "Tomou dano e morreu" << endl;
	}
	else
		cout << "Tomou dano" << endl;

}

void Guerreiro::defineEstamina(int qtd_estamina)
{
	this->estamina += qtd_estamina;
	if (this->estamina > 50)
		this->escudo = true;
	else
		this->escudo = false;

	if (qtd_estamina > 0);
	cout << "Aumentou Estamina" << endl;
	else

	cout << "Diminuiu Estamina" << endl;
}
