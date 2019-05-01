#pragma once
#include<string>

using namespace std;

class Personagem
{
public:
	Personagem();
	~Personagem();
	string atacar();
	string defender();
	string mover();
	string agachar();
	string pular();

	int getVida() { return vida; };
	int getDano() { return dano; };
	int getDefesa() { return defesa; };
	bool getVivo() { return vivo; };


private:
	int vida, dano, defesa;
	bool vivo;
};

