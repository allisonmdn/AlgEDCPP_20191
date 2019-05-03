#include "Pistola.h"



Pistola::Pistola()
{

}


Pistola::~Pistola()
{
}

void Pistola::recarregarMunicao()
{
	if (m_p->getMunicaoRestante() >= 0 && m_p->getMunicaoRestante() < 7)
	{
		std::cout << "\nRECARREGANDO MUNICAO! Municao anterior: " << m_p->getMunicaoRestante() << "\n";
		this->m_p->tipoMunicao();
	}
	else
	{
		std::cout << "\nLIMITE DE PROJETEIS ATINGIDO!\n";
	}
	
}

void Pistola::disparar()
{
	if (m_p->getMunicaoRestante() >= 1)
	{
		
		this->m_p->gastarMunicao();
		std::cout << "\nDISPARANDO!\n\n";
		
	}
	else
	{
		std::cout << "NAO FOI POSSIVEL DISPARAR, SEM MUNICOES! RECARREGUE!\n";
	}
}

void Pistola::tipoArma()
{
	
	std::cout << "Pistola[7 PROJETEIS]";

}
