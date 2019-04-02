#include "Paladino.h"



Paladino::Paladino()
{
	pm = 15;
	mal = false;
}


Paladino::~Paladino()
{
}

void Paladino::LancarMagia()
{
	cout << "Lancando magia!\n";
	pm -= 5;
}
