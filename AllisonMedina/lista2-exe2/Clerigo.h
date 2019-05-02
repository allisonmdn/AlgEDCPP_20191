#include "Mago.h"
#include <ctime>
#pragma once
class Clerigo:virtual public Mago
{
public:
	Clerigo();
	~Clerigo();

	//Sobrescrever ações.

	virtual void Atacar() override;
	virtual void Defender() override;

	//Ações de classe mágica.

	virtual void AtaqueMagico() override;

	virtual void executar() override;
	//Classe
	virtual std::string tipoClasse() override;

private:
	std::string c_clerigo;
	int intel = 10, forca = 0, vit = 10, agi = 0;

protected:

	void Bencao();
	void Agilidade();
	void Curar();
};

