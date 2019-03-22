#include "Personagem.h"



string Personagem::obtemLogin(){
	return this->login;
}

Personagem::Personagem(){
}


Personagem::~Personagem(){
}

string Personagem::mover(){
	return "Movendo";
}

string Personagem::quemSou(){

	return "Ninguem";
}

string Personagem::obtemNome(){
	return this->nome;
}
