#pragma once
#include "Sacerdote.h"
class SacerdoteLuz :
	public Sacerdote
{
public:
	SacerdoteLuz();
	~SacerdoteLuz();
	string Santuario();
private:
	int aguaBenta;
};

