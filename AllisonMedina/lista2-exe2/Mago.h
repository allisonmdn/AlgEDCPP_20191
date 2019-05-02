#include "Guerreiro.h"
#pragma once
class Mago: virtual public Guerreiro
{
public:
	Mago();
	~Mago();
	
	//Sobrescrever ações.

	virtual void Atacar() override;
	virtual void Defender() override;

	//Ações de classe mágica.

	virtual void AtaqueMagico();

	virtual void executar() override;
	//Classe
	virtual std::string tipoClasse() override;

private:
	//Variáveis privadas.

	std::string c_mago;
	int intel = 10, vit = 10;

	//Métodos privados.

	void BoladeFogo();
	void Nevasca();
	void AmplificarMagia();
};

