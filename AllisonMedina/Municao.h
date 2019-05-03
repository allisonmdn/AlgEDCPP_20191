#include <iostream>
#pragma once
class Municao
{
public:
	Municao();
	~Municao();

	virtual void tipoMunicao() = 0;

	virtual int getMunicaoRestante() = 0;

	virtual void gastarMunicao() = 0;


};

