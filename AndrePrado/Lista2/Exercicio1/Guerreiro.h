#pragma once
#include<string>
#include<iostream>

using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	void setNome(string n);

	int getForca() { return forca; }
	int getVida() { return pv; }
	int getMovimento() { return mov; }
	int getPosicao() { return posicao; }
	string getClasse() { return classeNome; }
	string getNome() { return nome; }

	void mover();
	void atacar(int caInimigo);

	int defender(int ataqueInimigo);

private:
	int pv, mov, ca, forca, posicao;
	string nome, classeNome;
};

