#pragma once


class Municao
{
public:
	Municao();
	~Municao();
	int getProjeteis() { return projeteis; }
	void setProjeteis(int projeteis) { this->projeteis = projeteis; }

protected:
	int projeteis = 10;
};

