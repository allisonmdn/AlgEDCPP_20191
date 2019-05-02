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

	//Sobrescrever ações.

	void Atacar() override;
	void Defender() override;

	//Ações de classe mágica.

	void AtaqueMagico() override;

	void executar() override;

	//Classe
	std::string tipoClasse() override;

private:
	std::string c_sacertrevas;
	void EscuridaoSuprema();
	void AbsorverIdentidade();
		

	//Opção EscuridãoSuprema.
	char op_esc;

};

