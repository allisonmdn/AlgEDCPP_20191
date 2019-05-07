#include "Guerreiro.h"
#pragma once
class Mago: virtual public Guerreiro
{
public:
	Mago();
	~Mago();
	
	//Sobrescrever a��es.

	virtual void Atacar() override;
	virtual void Defender() override;

	//A��es de classe m�gica.

	virtual void AtaqueMagico();

	virtual void executar() override;
	//Classe
	virtual std::string tipoClasse() override;

private:
	//Vari�veis privadas.

	std::string c_mago;
	int intel = 10, vit = 10;

	//M�todos privados.

	void BoladeFogo();
	void Nevasca();
	void AmplificarMagia();
};

