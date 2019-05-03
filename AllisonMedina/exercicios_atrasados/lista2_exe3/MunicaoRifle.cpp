#include "MunicaoRifle.h"



MunicaoRifle::MunicaoRifle()
{
	this->proRifle = mun_max;
}


MunicaoRifle::~MunicaoRifle()
{
}

void MunicaoRifle::tipoMunicao()
{
	if (proRifle < mun_max)	 //Limitador para quantidade m�xima de balas a adicionar, ap�s recarga.
	{
		proRifle = mun_max;
	}

	std::cout << "Tipo de Municao: para Rifle[RECARREGA O LIMITE DE PROJETEIS POR VEZ]\n";
}

int MunicaoRifle::getMunicaoRestante()
{
	return proRifle;
}

void MunicaoRifle::gastarMunicao()
{
	if (proRifle > 0 && proRifle <= mun_max) //Limitador para quantidade m�xima de balas a remover, ap�s disparo.
	{
		proRifle -= 1;

	}

	if (getMunicaoRestante() >= 0)
	{

		std::cout << "\nMunicoes Restantes apos DISPARANDO: " << this->getMunicaoRestante() << " \n\n";

	}
}
