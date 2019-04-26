#include "Pistola.h"



Pistola::Pistola()
{
}


Pistola::~Pistola()
{
}

void Pistola::disparar()
{

	cout << "ta ta tum pistola" << endl;

}

void Pistola::recarregar(Municao *municao)
{
	if (this->municao == 0) {
		this->municao = municao;
		cout << "recarregou pistola" << endl;
	}
	else {
		cout << "ja tem municao" << endl;
	}
}
