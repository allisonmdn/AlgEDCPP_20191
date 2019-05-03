#include "Municao.h"
#define mun_max 7  //Munição máxima.
#pragma once
class MunicaoPistola: virtual public Municao
{
public:
	MunicaoPistola();
	~MunicaoPistola();

	void tipoMunicao() override;  //Entrar tipo de munição para recarregar.
	int getMunicaoRestante() override;
	void gastarMunicao() override;

private:
	
	int proPist;
	
};

