#include "pch.h"
#include "Guerreiro.h"


Guerreiro::Guerreiro(int tp)
{
	if (tp == 1) {
		acao = "soco";
		force = 80;
		dexterity = 60;
	}
	else if (tp == 2) {
		acao = "chute";
		force = 90;
		dexterity = 70;
	}
	else if (tp == 3) {
		acao = "Haduken";
			magic = 10;
			mana = 20;
	}
	else if (tp == 4) {
		acao = "fugir";
		force = 20;
	}
	else if (tp == 5) {
		acao = "gritar";
			force = 5;
			life = 0;
	}
	else{}
}




Guerreiro::~Guerreiro()
{
}
