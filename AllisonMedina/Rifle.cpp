#include "Rifle.h"



Rifle::Rifle()
{
}


Rifle::~Rifle()
{
}

void Rifle::recarregarMunicao()
{
	if (m_r->getMunicaoRestante() == 0)
	{
		std::cout << "\nRECARREGANDO MUNICAO! Municao anterior: " << m_r->getMunicaoRestante() << "\n";
		this->m_r->tipoMunicao();
	}
	else if(m_r->getMunicaoRestante() == 20)
	{
		std::cout << "\nLIMITE DE PROJETEIS ATINGIDO!\n";
	}
	else
	{
		std::cout << "NECESSARIO GASTAR TODAS AS BALAS PARA RECARREGAR!\n";
	}

}

void Rifle::disparar()
{
	if (m_r->getMunicaoRestante() >= 1)
	{

		this->m_r->gastarMunicao();
		std::cout << "\nDISPARANDO!\n\n";

	}
	else
	{
		std::cout << "NAO FOI POSSIVEL DISPARAR, SEM MUNICOES! RECARREGUE!\n";
	}
}
void Rifle::tipoArma()
{
	std::cout << "Rifle[20 PROJETEIS]";
}
