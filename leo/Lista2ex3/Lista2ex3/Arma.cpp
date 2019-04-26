#include "Arma.h"



Arma::Arma()
{
}


Arma::~Arma()
{
}

void Arma::disparar()
{
	if (this->municao != nullptr) {
		if (this->municao->getProjeteis() > 0) {
			cout << "Municao: " << municao->getProjeteis() << endl;
			cout << "ta ta tum pistola" << endl;
			this->municao->diminuirProjeteis();
		}
		else {
			delete this->municao;
			this->municao = nullptr;
		}
	}
}

void Arma::recarregar(Municao * municao)
{
	if (this->municao == nullptr) {
		this->municao = municao;
	}
	else {
		cout << "ja tem municao" << endl;
	}
}