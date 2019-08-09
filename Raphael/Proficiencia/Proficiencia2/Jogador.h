#pragma once
class Jogador
{
public:
	Jogador();
	Jogador(int vida, int energia);
	~Jogador();

	int getVida();
	int getEnergia();
	void setVida(int vd);
	void setEnergia(int en);

private:
	int vida, energia;
};

