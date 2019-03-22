#include "Mago.h"



Mago::Mago(){
}


Mago::~Mago(){
}

string Mago::quemSou(){
	Personagem::quemSou();
	return "Mago";
}

void Mago::defineNome(string s){
	this->nome = Personagem::obtemLogin();
}
