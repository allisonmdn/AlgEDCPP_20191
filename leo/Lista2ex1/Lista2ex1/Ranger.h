#pragma once
#include "Arqueiro.h"
class Ranger :
	public Arqueiro
{
public:
	Ranger();
	~Ranger();
	string OlhosAguia();
private:
	int arcos;
};

