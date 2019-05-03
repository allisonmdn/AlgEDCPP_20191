#include "Municao.h"
#define mun_max 20
#pragma once
class MunicaoRifle: virtual public Municao
{
public:
	MunicaoRifle();
	~MunicaoRifle();

	void tipoMunicao() override;  //Entrar tipo de muni��o para recarregar.
	int getMunicaoRestante() override;
	void gastarMunicao() override;

private:
	int proRifle;
};

