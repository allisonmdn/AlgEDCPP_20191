#include "Guerreiro.h"
#pragma once
class Barbaro: virtual public Guerreiro
{
public:
	Barbaro();
	~Barbaro();

	//Sobrescrever M�todos.
	void Atacar() override;
	void Defender() override;
	void executar() override;
	std::string tipoClasse() override;

private:

	//Vari�veis e m�todos privados.
	std::string c_barbaro;
	int forca = 10, vit = 10, agi = 10;
	void RacharCranio();
	void AtivarBrutalidade();
};

