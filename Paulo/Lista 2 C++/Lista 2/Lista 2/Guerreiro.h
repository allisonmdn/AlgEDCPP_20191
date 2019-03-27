#pragma once
#include <string>
using namespace std;
class Guerreiro{
public:
	Guerreiro();
	~Guerreiro();
	string treinar();
	string lutar();

private:
	string morre();
	string tomarDano();
	string defineStamina(int qtd_stamina);
	int armadura;
	int arma;
	bool escudo;
	int hp;
	int stamina;
};

