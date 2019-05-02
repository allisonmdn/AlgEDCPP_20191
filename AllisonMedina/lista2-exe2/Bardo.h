#include "Guerreiro.h"
#include <ctime>
enum TIPO_PIADA
{
	ARANHA, PINHEIRO, PINTINHOCAIPIRA, PAGODEIRO, NAPOLEAO, PLANTINHA 
};

#pragma once
class Bardo:virtual public Guerreiro //Utilizei herança, mesmo não sendo de guerreiro, pois guerreiro está funcionando como personagem, também.
{
public:
	Bardo();
	~Bardo();
	
	//Sobrescrever métodos.
	std::string tipoClasse() override;
	void executar() override;


private:
	//Variáveis e métodos privados.
	int des = 10, vit = 10;
	std::string c_bardo;
	void CancaoDaFartura();
	void PiadaInfame();
	void CancaoDaDistracao();
	void CancaoEnergica();
	void AtaqueMusical();

	//Opção de piada.
	int op;
};

