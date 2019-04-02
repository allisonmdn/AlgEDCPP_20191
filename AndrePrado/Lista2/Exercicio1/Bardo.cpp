#include "Bardo.h"



Bardo::Bardo()
{
	pm = 20;
}


Bardo::~Bardo()
{
}

void Bardo::tocarMusica()
{
	cout << "Tocando!\n";
}

void Bardo::lancarMagia()
{
	cout << "Lancando magia!\n";
	pm -= 5;
}
