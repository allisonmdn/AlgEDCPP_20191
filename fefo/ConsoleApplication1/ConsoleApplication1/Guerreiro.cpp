#include "stdafx.h"
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

std::string Guerreiro::treinar()
{
	defineEstamina(10);
	return "treinando...";
}

std::string Guerreiro::lutar()
{
	defineEstamina(-3);
	tomarDano() ;
	return "lutando";
}

std::string Guerreiro::defineEstamina(int qtd_estamina)
{
	this->estamina += qtd_estamina;
	if (this->estamina > 50)
		escudo = true;
	else
		escudo = false;
	if (qtd_estamina > 0)
		
		return "Aumentou Definida";
	else
		return "Diminuiu  Estamina";
}

std::string Guerreiro::morre()
{
	return "morreu";
}

std::string Guerreiro::tomarDano()
{
	if (escudo)
		this->hp -= 5 / this->armadura;
	else 
	this->hp -= 10 / this->armadura;
	if (this->hp <= 0) {
		morre();
		return "tomou dano e morreu";
	}
}
