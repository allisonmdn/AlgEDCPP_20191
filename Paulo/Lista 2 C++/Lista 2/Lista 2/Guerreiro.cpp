#include "Guerreiro.h"
Guerreiro::Guerreiro(){
	this->hp = 100;
	this->stamina = 50;
	this->escudo = false;
	this->arma = 10;
	this->armadura = 10;
}

Guerreiro::~Guerreiro(){
}

string Guerreiro::treinar(){
	defineStamina(10);
	return "---Treinando---";
}

string Guerreiro::lutar(){
	defineStamina(-3);
	tomarDano();
	return "---Lutando---";
}

string Guerreiro::morre(){
	return "---Morreu---";
	
}

string Guerreiro::tomarDano(){
	if (escudo) {
		this->hp -= 5 /*/ this->armadura*/;
	}
	else {
		this->hp -= 10 /*/ this->armadura*/;
	}
	if (this->hp <= 0) {
		morre();
		return "---Tomou dano e morreu---";
	}
	return "---Tomou dano---";
}

string Guerreiro::defineStamina(int qtd_stamina){
	this->stamina += qtd_stamina;
	if (this->stamina > 50) {
		this->escudo = true;
	}
	else {
		this->escudo = false;
	}
	if (qtd_stamina > 0) {
		return "---Stamina aumentou---";
	}
	else
		return "---Stamina diminuiu---";
}
