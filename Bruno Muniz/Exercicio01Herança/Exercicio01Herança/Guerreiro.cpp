#include "Guerreiro.h"
#include<iostream>

using namespace std;


Guerreiro::Guerreiro()
{
	this->hp = 100;
	this->estamina = 50;
	this->escudo = false;
	this->arma = 10;
	this->armadura = 10;

	vida = 200;
	y = 0;
	x = 0;
	vel = 0.2;
	v = true;
}


Guerreiro::~Guerreiro()
{
}

std::string Guerreiro::treinar()
{
	defineEstamina(10);
	return "Treinando...";
}

std::string Guerreiro::lutar()
{
	defineEstamina(-3);
	tomarDano();
	return "Lutando..";
}

std::string Guerreiro::defineEstamina(int qtd_estamina)
{
	this->estamina += qtd_estamina;
	if (this->estamina > 50)
		this->escudo = true;
	else
		this->escudo = false;

	if (qtd_estamina > 0)
		return "Aumentou Estamina...";
	else
		return "Diminuiu Estamina...";
}

std::string Guerreiro::morre()
{
	return "Morreu...";
}

std::string Guerreiro::tomarDano()
{
	if (escudo)
		this->hp -= 10 / this->armadura;
	else
		this->hp -= 10 / this->armadura;

	if (this->hp <= 0) {
		morre();
		return "Tomou Dano e morreu";
	}
	else
	{
		return "Tomou Dano";
	}
}

void Guerreiro::defender()
{
	cout << "Defendendo" << endl;
}

void Guerreiro::atacar()
{
	cout << "Atacando" << endl;
}

void Guerreiro::estrangular()
{
	cout << "Estrangulando - vou te deixar sem ar" << endl;
}

void Guerreiro::rasteira()
{
	cout << "Rasteira - vou te derrubar" << endl;
}

void Guerreiro::socar()
{
	cout << "Socar - vou socar sua cara" << endl;
}

void Guerreiro::arremessar()
{
	cout << "Arremessar - pega essa!!" << endl;
}

void Guerreiro::gritar()
{
	cout << "Grito - Eu vou te pegar..." << endl;
}

void Guerreiro::correr()
{
	cout << "Correr - Estou mais rapido" << endl;
}

void Guerreiro::furia()
{
	cout << "Isto nao vai ficar assim" << endl;
}

void Guerreiro::repararArmas()
{
	cout << "Estou dando um trato nas armas" << endl;
}

void Guerreiro::rolar()
{
	cout << "Opa vc nao me pega" << endl;
}
