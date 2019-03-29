#include "KitMedico.h"



KitMedico::KitMedico()
{
}


KitMedico::~KitMedico()
{
}

void KitMedico::setKitMedico(int simNao)
{
	if (simNao == 1 || simNao == 0)
		tem = simNao;
}
