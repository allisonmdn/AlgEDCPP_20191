#include "MunicaoCarabina.h"



MunicaoCarabina::MunicaoCarabina()
{
	proCara = mun_max;
}


MunicaoCarabina::~MunicaoCarabina()
{
}

void MunicaoCarabina::tipoMunicao()
{
	
	
	if (municao_impar)//Se muni��o for valor �mpar.
	{
		std::cout << "GASTE MAIS UM PROJETIL PARA RECARREGAR ESSE TIPO DE MUNICAO!\n";
	}
	else
	{
		proCara += 2;
	}


	std::cout << "Tipo de Municao: para Carabina![RECARREGA DUAS POR VEZ]\n";
}

int MunicaoCarabina::getMunicaoRestante()
{
	return proCara;
}

void MunicaoCarabina::gastarMunicao()
{
	if (proCara > 0 && proCara <= mun_max) //Limitador para quantidade m�xima de balas a remover, ap�s disparo.
	{
		--proCara;

	}

	if (getMunicaoRestante() >= 0)
	{

		std::cout << "\nMunicoes Restantes apos DISPARANDO: " << this->getMunicaoRestante() << " \n\n";

	}
}
