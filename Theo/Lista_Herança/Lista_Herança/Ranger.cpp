#include "Ranger.h"
#include<iostream>


Ranger::Ranger()
{
}


Ranger::~Ranger()
{
}

string Ranger::Atirar()
{
	if (flechas > 0) 
	{
		return string();
	}
	
	else 
	{
		cout << "Estou sem flecha...";
	}
}

string Ranger::pegarFlecha()
{
	return string("Pegando...");
}
