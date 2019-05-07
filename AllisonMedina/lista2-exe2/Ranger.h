#include "Guerreiro.h"
#pragma once
class Ranger:virtual public Guerreiro //Utilizei heran�a, mesmo n�o sendo de guerreiro, pois guerreiro est� funcionando como personagem, tamb�m.
{
public:
	Ranger();
	~Ranger();

	//Sobrescrever m�todos.

	std::string tipoClasse() override;
	void executar() override;

private:
	//Vari�veis e m�todos privados.

	int des = 10, agi = 10;
	std::string c_ranger;
	void AtaqueDistante();
	void RajadaPrecisa();
	void Concentracao();
	void Correr();
};

