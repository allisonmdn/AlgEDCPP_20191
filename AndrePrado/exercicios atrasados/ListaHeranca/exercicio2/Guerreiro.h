#pragma once
#include "PersoBase.h"
class Guerreiro :
	public PersoBase
{
public:
	Guerreiro();
	~Guerreiro();

	//get
	int getForca() { return forca; }
	int getArmadura() { return armadura; }
	bool getGolpeEspecial() { return gEspecial; }

	//set
	void setForca(int f) { forca = f; }
	void setArmadura(int a) { armadura = a; }
	void setGolpeEspecial(bool g) { gEspecial = g; }

	//metodos
	std::string atacar();
	std::string defender(int fInim);

private:
	int armadura, forca;
	bool gEspecial;
};

