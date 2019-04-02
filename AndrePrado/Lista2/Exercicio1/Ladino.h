#pragma once
#include"includesBase.h"
class Ladino
{
public:
	Ladino();
	~Ladino();

	void setNome(string n) { nome = n; }

	int getForca() { return forca; }
	int getVida() { return pv; }
	int getMovimento() { return mov; }
	int getPosicao() { return posicao; }
	string getClasse() { return classeNome; }
	string getNome() { return nome; }
	bool getFurtividade() { return furtividade; }
	int getDinheiro() { return po; }

	void mover();
	void atacarPorcostas(int pvInimigo);
	void pungar();
	void enganar() { cout << "Enganando!\n"; }
	void atuar() { cout << "Engando!\n"; }

private:
	int pv, mov, ca, forca, posicao, po;
	string nome, classeNome;
	bool furtividade;
};

