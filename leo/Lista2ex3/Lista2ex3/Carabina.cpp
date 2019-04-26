#include "Carabina.h"



Carabina::Carabina()
{
}


Carabina::~Carabina()
{
}

void Carabina::disparar()
{
	cout << "ta ta tum carabina" << endl;
}

void Carabina::recarregar(Municao*municao)
{

	if (this->municao == 0) {
		this->municao = municao;
		cout << "recarregou carabina" << endl;
	}
	else {
		cout << "ja tem municao" << endl;
	}
	
}