#pragma once

class Municao
{
public:
	Municao();
	~Municao();
	int getProjeteis() { return this->projeteis; }
	void diminuirProjeteis();
private:
	int projeteis = 10;
protected:

	void setProjeteis(int projeteis) { this->projeteis = projeteis; }
};

