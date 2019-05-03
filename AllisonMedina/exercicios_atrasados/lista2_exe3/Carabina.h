#include "Arma.h"
#include "MunicaoCarabina.h"

#pragma once
class Carabina:virtual public Arma
{
public:
	Carabina();
	~Carabina();

	void recarregarMunicao() override;
	void disparar() override;
	void tipoArma() override;

private:
	MunicaoCarabina * m_c = new MunicaoCarabina;
};

