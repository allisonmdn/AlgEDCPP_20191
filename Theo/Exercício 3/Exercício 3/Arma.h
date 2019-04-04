#pragma once
#include<string>;

using namespace std;

class Arma
{
public:
	Arma();
	~Arma();
	virtual string atirar();
	virtual string recarregar(int qtdBalas);
	int pente = 0;
};

