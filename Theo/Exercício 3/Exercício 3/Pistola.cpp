#include "Pistola.h"



Pistola::Pistola()
{
}


Pistola::~Pistola()
{
}

string Pistola::atirar()
{
	if (pente > 0)
	{
		pente--;
		return string("Atirando com pistola...");
	}
	else
	{
		return string("Sem municao...");
	}
}

string Pistola::recarregar(int qtdBalas)
{
	pente += qtdBalas;
	return string("Recarregando");
}

