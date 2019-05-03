#include "Municao.h"
#define mun_max 4  //Muni��o m�xima.
#define municao_impar proCara % 2 != 0 //Em caso da muni��o ser �mpar.
#pragma once
class MunicaoCarabina:virtual public Municao
{
public:
	MunicaoCarabina();
	~MunicaoCarabina();
	
	void tipoMunicao() override;  //Entrar tipo de muni��o para recarregar.
	int getMunicaoRestante() override;
	void gastarMunicao() override;

private:
	
	int proCara;  //Proj�til de carabina

};

