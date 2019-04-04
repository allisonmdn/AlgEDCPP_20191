#include "Combatentes.h"

Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

string Guerreiro::estrangular()
{
	return string("Estou estrangulando!");
}

string Guerreiro::pegarEspada()
{
	temEspada = true;
	if(temEspada)
	{
		return string("Pegando espada!");
	}
	
}

string Guerreiro::pegarArmadura()
{
	temArmadura = true;
	if (temArmadura)
	{
		return string("Pegando armadura!");
	}
	
}

string Guerreiro::montarNoCavalo()
{
	montaria = true;
	if (montaria)
	{
		return string("Montando no cavalinho...");
	}
}

string Guerreiro::contraAtacar()
{
	return string("Aqui nao, queridinho!!!");
}


//Barbaro
Barbaro::Barbaro()
{
}

Barbaro::~Barbaro()
{
}

string Barbaro::decepar()
{
	return string("Decepar!");
}

Paladino::Paladino()
{
}

Paladino::~Paladino()
{
}

string Paladino::defesaSagrada()
{
	return string("Defendendo!");
}
