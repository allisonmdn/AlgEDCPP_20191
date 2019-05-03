#include "Carabina.h"



Carabina::Carabina()
{
}


Carabina::~Carabina()
{
}

void Carabina::recarregarMunicao()
{
	if (m_c->getMunicaoRestante() >= 0 && m_c->getMunicaoRestante() < 4)
	{
		if (m_c->getMunicaoRestante() % 2 == 0)	  //Munição par.
		{
			std::cout << "\nRECARREGANDO MUNICAO! Municao anterior: " << m_c->getMunicaoRestante() << "\n";
			this->m_c->tipoMunicao();
		}		
		else
		{
			std::cout << "NAO FOI POSSIVEL RECARREGAR!\n";
			m_c->tipoMunicao();
		}		   		
		
	}	
	else
	{
		std::cout << "\nLIMITE DE PROJETEIS ATINGIDO!\n";	//Munição cheia.
	}
}

void Carabina::disparar()
{
	if (m_c->getMunicaoRestante() >= 1)
	{

		this->m_c->gastarMunicao();
		std::cout << "\nDISPARANDO!\n\n";

	}
	else
	{
		std::cout << "NAO FOI POSSIVEL DISPARAR, SEM MUNICOES! RECARREGUE!\n";
	}
}

void Carabina::tipoArma()
{
	std::cout << "Carabina[4 PROJETEIS]";
}
