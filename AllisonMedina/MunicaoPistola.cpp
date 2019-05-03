#include "MunicaoPistola.h"



MunicaoPistola::MunicaoPistola()
{
	this->proPist = mun_max;
	
}


MunicaoPistola::~MunicaoPistola()
{
	
}

void MunicaoPistola::tipoMunicao()
{
	if (proPist < mun_max)	 //Limitador para quantidade máxima de balas a adicionar, após recarga.
	{
		++proPist;
	}
		
	std::cout << "Tipo de Municao: para Pistola![RECARREGA UMA POR VEZ]\n";
}

int MunicaoPistola::getMunicaoRestante()
{

	return proPist;
}

void MunicaoPistola::gastarMunicao()
{
		
	if (proPist > 0 && proPist <= mun_max) //Limitador para quantidade máxima de balas a remover, após disparo.
	{
		--proPist;	 
		
	}
		
	if (getMunicaoRestante() >= 0)
	{
		
		std::cout << "\nMunicoes Restantes apos DISPARANDO: " << this->getMunicaoRestante() << " \n\n";
					  
	}		  			 			 	
	
}
