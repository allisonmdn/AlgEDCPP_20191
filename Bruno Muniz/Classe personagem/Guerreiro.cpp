#include "Guerreiro.h"
#include<iostream>

using namespace std;


Guerreiro::Guerreiro()
{
	vida = 200;
	y = 0;
	x = 0;
	vel = 0.2;
	v = true;
}


Guerreiro::~Guerreiro()
{
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
	cout << "Grito- Eu vou te pegar..." << endl;
}

void Guerreiro::correr()
{
	cout << "Estou mais rapido" << endl;
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
