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

	//Sobrescrever a��es.

	void Atacar() override;
	void Defender() override;

	//A��es de classe m�gica.

	void AtaqueMagico() override;
		
	void executar() override;

	//Classe
	std::string tipoClasse() override;

private:

	std::string c_sacerluz;

	void TrazerDivindade();
	void AbencoarDia();

	//Vari�veis para op��es dos tipos de divindades e ben��os do dia.
	
	int op, op_ab;
};

