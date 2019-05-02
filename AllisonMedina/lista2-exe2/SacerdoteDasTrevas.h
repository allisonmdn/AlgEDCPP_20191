#include "Clerigo.h"
#pragma once
enum TIPOS_ESCURIDAO
{
	SOLIDAO, ODIO, EGOISMO, LUXURIA, GANANCIA
};
class SacerdoteDasTrevas:virtual public Clerigo
{
	
public:
	SacerdoteDasTrevas();
	~SacerdoteDasTrevas();

	//Sobrescrever a��es.

	void Atacar() override;
	void Defender() override;

	//A��es de classe m�gica.

	void AtaqueMagico() override;

	void executar() override;

	//Classe
	std::string tipoClasse() override;

private:
	std::string c_sacertrevas;
	void EscuridaoSuprema();
	void AbsorverIdentidade();
		

	//Op��o Escurid�oSuprema.
	char op_esc;

};

