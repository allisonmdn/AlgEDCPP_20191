#include "Arma.h"



Arma::Arma()
{
}


Arma::~Arma()
{
}

void Arma::disparar()
{
	
	if (this->mun != nullptr) {
			if (this->mun->getProjeteis() > 0) {
				std::cout << "Projeteis na Municao " << this->mun->getProjeteis() << std::endl;
				std::cout << "disparar" << std::endl;
				this->mun->diminuiProjeteis();
			}
			else {
				delete this->mun;
				this->mun = nullptr;
			}
	}
}

void Arma::recarregar(Municao * mun)
{
	if (this->mun == nullptr) {
		this->mun = mun;
	}else{
		std::cout << "A arma possui municao" << std::endl;
	}

}
