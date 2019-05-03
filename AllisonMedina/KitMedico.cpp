#include "KitMedico.h"



KitMedico::KitMedico()
{
}


KitMedico::~KitMedico()
{
}

void KitMedico::tipoKit()
{
	srand(time(NULL));

	op = rand() % 4;

	switch (op)
	{
	case PEQUENO: std::cout << "Kit Pequeno\n";
		break;
	case MEDIO: std::cout << "Kit Medio\n";
		break;
	case GRANDE: std::cout << "Kit Grande\n";
		break;
	case MAXIMO: std::cout << "Kit Maximo\n";
		break;
	}
}
