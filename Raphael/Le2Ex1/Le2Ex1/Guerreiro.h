#pragma once
#include <string>
#include <iostream>
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	std::string treinar();
	std::string lutar();
private:
	std::string defineEstamina(int qtd_estamina);
	std::string morre();
	std::string tomarDano();
	int armadura;
	int arma;
	bool escudo;
	int hp;
	int estamina;
};

