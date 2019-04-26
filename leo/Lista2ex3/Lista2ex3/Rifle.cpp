#include "Rifle.h"



Rifle::Rifle()
{
}


Rifle::~Rifle()
{
}

void Rifle::disparar()
{
	cout << "ta ta tum rifle" << endl;
}

void Rifle::recarregar(Municao*municao)
{
	if (this->municao == 0) {
		this->municao = municao;
		cout << "recarregou rifle" << endl;
	}
	else {
		cout << "ja tem municao" << endl;
	}
}
