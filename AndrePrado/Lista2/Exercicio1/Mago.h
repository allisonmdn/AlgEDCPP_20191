#pragma once
#include"includesBase.h"
class Mago
{
public:
	Mago();
	~Mago();

	void setNome(string n) { nome = n; }

	int getVida() { return pv; }
	int getPM() { return pm; }
	int getMovimento() { return mov; }
	int getPosicao() { return posicao; }
	string getClasse() { return classeNome; }
	string getNome() { return nome; }

	void mover();
	void lancarMagia();

private:
	int pv, mov, ca, pm, posicao;
	string nome, classeNome;
};


