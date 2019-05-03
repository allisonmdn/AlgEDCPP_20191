#include "Arma.h"
#include "MunicaoPistola.h"
#pragma once
class Pistola:virtual public Arma
{
public:
	Pistola();
	~Pistola();
	void recarregarMunicao() override;	  	
	void disparar() override;
	void tipoArma() override;
	
private:
	MunicaoPistola * m_p = new MunicaoPistola;
		
	
};

