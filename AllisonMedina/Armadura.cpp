#include "Armadura.h"



Armadura::Armadura()
{
}


Armadura::~Armadura()
{
}

void Armadura::tipoArmadura(std::string armor)
{
	armadura = armor;

	srand(time(NULL));

	tipo_armor_op = rand() % 4;
	
	switch (tipo_armor_op)
	{
	case VINTE: armadura = "20 %";
		break;
	case QUARENTA: armadura = "40 %";
		break;
	case SESSENTA: armadura = "60 %";
		break;
	case CEM: armadura = "100 %";
		break;
	}

	std::cout << "Sua armadura agora tem: " << armadura << " de resistencia.";

}
