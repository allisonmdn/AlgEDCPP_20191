#include "KitMedico.h"



KitMedico::KitMedico()
{
}


KitMedico::~KitMedico()
{
}

string KitMedico::medicar()
{
	getQtdKitMed(1);
	
	if (tem == true) {
		return string("medicando");
	}
	else {
		return string("sem kit medico");
	}
}

bool KitMedico::getKitMed()
{
	return tem;
}
