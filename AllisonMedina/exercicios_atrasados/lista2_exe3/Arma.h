#include <iostream>

#pragma once

class Arma
{
public:
	Arma();
	~Arma();

	virtual void recarregarMunicao();  	
	virtual void disparar();
	virtual void tipoArma();

	//Arma * arma;	  //Tipos de arma a modificar

	
};

