#include "Ranger.h"



Ranger::Ranger()
{
	flechas = 10;
	pm = 15;
	animal = false;
}


Ranger::~Ranger()
{
}

void Ranger::LancarMagia()
{
	cout << "Lancando magia!\n";
	pm -= 5;
}

void Ranger::atacarArcoFlecha()
{
	cout << "Disparar flecha!\n";
	flechas -= 1;
}
