#pragma once
#include "Arma.h"
#include<string>

using namespace std;

class Pistola :
	public Arma
{
public:
	Pistola();
	~Pistola();
	string atirar() override;
	string recarregar(int qtdBalas) override;
};

