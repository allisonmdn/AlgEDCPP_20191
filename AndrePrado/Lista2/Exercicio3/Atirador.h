#pragma once
#include"Pistola.h"
#include<string>
class Atirador
{
public:
	Atirador();
	~Atirador();

	void disparar(Pistola nArma);
	void recaregar(Pistola nArma);

private:
	bool vivo;
	int vida;
};

