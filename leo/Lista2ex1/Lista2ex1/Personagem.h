#pragma once
#include <string>
using namespace std;
class Personagem
{
public:
	Personagem();
	~Personagem();

	string Atacar();
	string Defender();
	string Mover();
	string Agachar();
	string Pular();

	int getSaude() { return saude; };
	bool getVivo() { return vivo; }
	int getFolego() { return folego; }
	int getDano() { return dano; };
	int getDefesa() { return defesa; };

private:
	int saude;
	bool vivo;
	int folego;
	int	dano;
	int defesa;

};

