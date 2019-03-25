#pragma once
#include "Ladino.h"
class Bardo :
	public Ladino
{
public:
	Bardo();
	~Bardo();

	void tocarMusica();
	void lancarMagia();

	int getPM() { return pm; }

private:
	int pm;
};

