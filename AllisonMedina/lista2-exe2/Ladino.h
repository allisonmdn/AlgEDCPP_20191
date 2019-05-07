#include "Guerreiro.h"
#pragma once
class Ladino:virtual public Guerreiro
{
public:
	Ladino();
	~Ladino();

	//Sobrescrever A��es.
	void Atacar() override;
	void Defender() override;
	
	void executar() override;
	//Classe
	std::string tipoClasse() override;
		

private:
	//M�todos e atributos privados.
	void Apunhalar();
	void FurtarAtributo();
	std::string c_lad;
	int agi = 10, forc = 10;
};	


