#include "Armas.h"



Armas::Armas()
{
}


Armas::~Armas()
{
}

void Armas::disparar()
{
	if (mun != nullptr)
		if (mun->getProjeteis() > 0) {
			std::cout << "Projeteis na municao: " << mun->getProjeteis() << std::endl;
			std::cout << "Disparrar!\n";
			mun->diminuiProjeteis();
		}
}

void Armas::recarregar(Municao * mun)
{
	if (this->mun != nullptr) {
		this->mun = mun;
	}
}
