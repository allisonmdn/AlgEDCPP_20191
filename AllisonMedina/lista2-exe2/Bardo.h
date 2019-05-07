#include "Guerreiro.h"
#include <ctime>
enum TIPO_PIADA
{
	ARANHA, PINHEIRO, PINTINHOCAIPIRA, PAGODEIRO, NAPOLEAO, PLANTINHA 
};

#pragma once
class Bardo:virtual public Guerreiro //Utilizei heran�a, mesmo n�o sendo de guerreiro, pois guerreiro est� funcionando como personagem, tamb�m.
{
public:
	Bardo();
	~Bardo();
	
	//Sobrescrever m�todos.
	std::string tipoClasse() override;
	void executar() override;


private:
	//Vari�veis e m�todos privados.
	int des = 10, vit = 10;
	std::string c_bardo;
	void CancaoDaFartura();
	void PiadaInfame();
	void CancaoDaDistracao();
	void CancaoEnergica();
	void AtaqueMusical();

	//Op��o de piada.
	int op;
};

