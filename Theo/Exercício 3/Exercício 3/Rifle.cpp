#include "Rifle.h"



Rifle::Rifle()
{
}


Rifle::~Rifle()
{
}

string Rifle::atirar()
{
	if (pente > 0)
	{
		pente--;
		return string("Atirando com rifle...");
	}
	else
	{
		return string("Sem municao...");
	}
	
}

string Rifle::recarregar(int qtdBalas)
{
	pente += qtdBalas;
	return string("Recarregando");
}
