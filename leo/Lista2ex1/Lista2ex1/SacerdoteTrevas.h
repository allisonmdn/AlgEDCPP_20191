#pragma once
#include "Sacerdote.h"
class SacerdoteTrevas :
	public Sacerdote
{
public:
	SacerdoteTrevas();
	~SacerdoteTrevas();
	string Invocar();
private:
	int ossos;
};

