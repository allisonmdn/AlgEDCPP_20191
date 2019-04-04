#include "Carabina.h"



Carabina::Carabina()
{
}


Carabina::~Carabina()
{
}

string Carabina::atirar()
{
	if (pente > 0)
	{
		pente--;
		return string("Atirando com carabina...");
	}
	else
	{
		return string("Sem municao...");
	}
}

string Carabina::recarregar(int qtdBalas)
{
	pente += qtdBalas;
	return string("Recarregando");
}
