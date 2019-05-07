#include "Clerigo.h"

enum TIPOS_DIV
{
	Fudo, Sakyamuni, Monju, Fugen, Jizo, Miroku, Yakushi, Kannon, Seishi
};
enum TIPOS_BENCAO
{
	Felicidade, Amoroso, Magnifico, RepletodeSorte
};

#pragma once
class SacerdoteDaLuz:virtual public Clerigo
{
public:
	SacerdoteDaLuz();
	~SacerdoteDaLuz();

	//Sobrescrever ações.

	void Atacar() override;
	void Defender() override;

	//Ações de classe mágica.

	void AtaqueMagico() override;
		
	void executar() override;

	//Classe
	std::string tipoClasse() override;

private:

	std::string c_sacerluz;

	void TrazerDivindade();
	void AbencoarDia();

	//Variáveis para opções dos tipos de divindades e bençãos do dia.
	
	int op, op_ab;
};

