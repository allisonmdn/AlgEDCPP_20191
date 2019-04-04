#pragma once
#include <string>

using namespace std;
class personagem
{
public:
	personagem();
	~personagem();
	int getVida() { return vida; }
	int getDefesa() { return defesa; }
	int getDano() { return dano; }
	bool getVivo() { return vivo; }
	void setVida(int Vida) { vida = Vida; }
	void setDefesa(int Defesa) { defesa = Defesa; }
	void setDano(int Dano) { dano = Dano; }
	void setVivo(int Vivo) { vivo = Vivo; }
	string atacar() { return "atacando"; }
	string defender() { return "defendendo"; }
	string mover() { return "movendo"; }
	string agachar() { return "agachando"; }
protected:
	bool vivo;
	int vida, defesa, dano;
};

