#include <iostream>
#include <ctime>

enum TIPOS_KITS {
	PEQUENO, MEDIO, GRANDE, MAXIMO
};

#pragma once
class KitMedico
{
public:
	KitMedico();
	~KitMedico();
	void tipoKit();
	
private:
	int op; //Opção kit;
	

};

