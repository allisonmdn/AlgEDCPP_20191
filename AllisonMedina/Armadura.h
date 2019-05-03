#include <iostream>
#include <string>
#include <ctime>
#pragma once

enum TIPOS_ARMADURAS {
	VINTE, QUARENTA, SESSENTA, CEM
};

class Armadura
{
public:
	Armadura();
	~Armadura();
	void tipoArmadura(std::string armor); //Tipos de armaduras a trocar.

private:
	std::string armadura;
	int tipo_armor_op; //Mudanças dos tipos.
};

