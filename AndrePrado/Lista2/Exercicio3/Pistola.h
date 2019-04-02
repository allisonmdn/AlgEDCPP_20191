#pragma once
#include"Atirador.h"
#include"MunicaoPisto.h"
class Pistola :
	public Atirador
{
public:
	Pistola();
	~Pistola();

	int getMunicao() { return municao; }

	void reduzirMunicao() { municao--; }
	

private:
	int municao, aux;
};

