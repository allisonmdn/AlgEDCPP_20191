#include "Atirador.h"



Atirador::Atirador()
{
	
	armas[0] = new Pistola();
	armas[1] = new Carabina();
	armas[2] = new Rifle();
	
	troca_armas = 0;

	trocar_armadura = "";
			
}


Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	armas[troca_armas]->disparar();
		
}

void Atirador::recarregarArma()
{		
	armas[troca_armas]->recarregarMunicao();
}

void Atirador::mudarArma()
{					

	if (troca_armas >= 0 && troca_armas < 2) //Menos uma volta do tamanho total, inicia com o 0.
	{
		std::cout << "\nTrocando para arma seguinte!\n";
		armas[troca_armas++];

	}
	else
	{
		std::cout << "\nTrocando para a primeira arma novamente!\n";

		troca_armas = 0;

		armas[troca_armas];
		
	}	 				
	
}

void Atirador::armaEscolhida()
{
	std::cout << "Tipo arma: ";
	armas[troca_armas]->tipoArma();
	std::cout << "\n\n";
}

void Atirador::usarArmadura()
{
	std::cout << "USANDO ARMADURA!\n";
	armor->tipoArmadura(trocar_armadura);
}

void Atirador::usarKitMedico()
{
	std::cout << "USANDO KIT MEDICO: ";
	kitm->tipoKit();
}
