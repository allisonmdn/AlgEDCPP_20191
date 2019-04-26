#pragma once
#include <iostream>
#include "Municao.h"

using namespace std;

class Arma
{
public:
	Arma();
	~Arma();
	virtual void disparar();
	virtual void recarregar(Municao *municao);

private:
	int pente;
	Municao *municao = nullptr;
};