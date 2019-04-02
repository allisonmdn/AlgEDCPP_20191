#pragma once
#include "Guerreiro.h"
class Ranger :
	public Guerreiro
{
public:
	Ranger();
	~Ranger();

	void LancarMagia();
	void chamarCompAnimal() { animal = true; }
	void atacarArcoFlecha();

	int getFlechas() { return flechas; }
	int getPM() { return pm; }
private:
	int flechas, pm;
	bool animal;
};

