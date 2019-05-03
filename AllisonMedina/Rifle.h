#include "Arma.h"
#include "MunicaoRifle.h"
#pragma once
class Rifle:virtual public Arma
{
public:
	Rifle();
	~Rifle();

	void recarregarMunicao() override;
	void disparar() override;
	void tipoArma() override;

private:
	MunicaoRifle * m_r = new MunicaoRifle;
};

