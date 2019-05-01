#pragma once
#include "Sacerdote.h"
class Clerigo :
	public Sacerdote
{
public:
	Clerigo();
	~Clerigo();
	string Martirio();
private:
	int cruzes;
};

