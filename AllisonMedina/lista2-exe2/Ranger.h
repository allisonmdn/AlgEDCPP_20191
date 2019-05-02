#include "Guerreiro.h"
#pragma once
class Ranger:virtual public Guerreiro //Utilizei herança, mesmo não sendo de guerreiro, pois guerreiro está funcionando como personagem, também.
{
public:
	Ranger();
	~Ranger();

	//Sobrescrever métodos.

	std::string tipoClasse() override;
	void executar() override;

private:
	//Variáveis e métodos privados.

	int des = 10, agi = 10;
	std::string c_ranger;
	void AtaqueDistante();
	void RajadaPrecisa();
	void Concentracao();
	void Correr();
};

