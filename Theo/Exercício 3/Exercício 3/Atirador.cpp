#include "Atirador.h"

Atirador::Atirador()
{
}

Atirador::~Atirador()
{
}

void Atirador::recarregarArma()
{
	if (armaAtual == 0)
	{
		getArma()->recarregar(6);
	}
	
	if (armaAtual == 1)
	{
		getArma()->recarregar(30);
	}

	if (armaAtual == 2)
	{
		getArma()->recarregar(2);
	}
}

string Atirador::usarArmadura()
{
	
	if (armadura->getQuantidade() > 0)
	{
		armadura->setArmadura(true);
	}
	if (armadura->getArmadura() == true)
	{
		return string("Usando armadura");
		armadura->setQuantidade(-1);

		if (armadura->getQuantidade() == 0)
		{
			armadura->setArmadura(false);
		}
	}
	else
	{
		return string("Sem armadura...");
	}
}

string Atirador::usarKitMedico()
{
	kit->setQuantidade(-5);

	if (kit->getQuantidade() > 0)
	{
		kit->setKit(true);
	}
	if (kit->getKit() == true)
	{
		return string("Usando kit medico");

		if (kit->getQuantidade() <= 0)
		{
			kit->setKit(false);
			return string("Acabou o kit");
		}
	}
	else
	{ 
		return string("Sem kit medico...");
	}
}

void Atirador::trocarArma(int i)
{
	armaAtual = i;
}

Arma * Atirador::getArma()
{
	return arma[armaAtual];
}

Municao * Atirador::getMunicao()
{
	return municao[armaAtual];
}





















