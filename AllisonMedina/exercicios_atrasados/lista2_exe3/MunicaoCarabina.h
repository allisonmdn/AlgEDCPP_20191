#include "Municao.h"
#define mun_max 4  //Munição máxima.
#define municao_impar proCara % 2 != 0 //Em caso da munição ser ímpar.
#pragma once
class MunicaoCarabina:virtual public Municao
{
public:
	MunicaoCarabina();
	~MunicaoCarabina();
	
	void tipoMunicao() override;  //Entrar tipo de munição para recarregar.
	int getMunicaoRestante() override;
	void gastarMunicao() override;

private:
	
	int proCara;  //Projétil de carabina

};

