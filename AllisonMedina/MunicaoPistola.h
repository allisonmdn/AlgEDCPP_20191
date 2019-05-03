#include "Municao.h"
#define mun_max 7  //Muni��o m�xima.
#pragma once
class MunicaoPistola: virtual public Municao
{
public:
	MunicaoPistola();
	~MunicaoPistola();

	void tipoMunicao() override;  //Entrar tipo de muni��o para recarregar.
	int getMunicaoRestante() override;
	void gastarMunicao() override;

private:
	
	int proPist;
	
};

