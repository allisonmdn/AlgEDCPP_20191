#include <iostream>	 
#include <conio.h>
#include <string>
#pragma once

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	//Modificar atributos.
	void setFor(int f);
	void setAgi(int a);
	void setVit(int v);
	void setInt(int i);
	void setDes(int d);

	//Returns

	int getFor();
	int getAgi();
	int getVit();
	int getInt();
	int getDes();

	//Métodos fixos.
	void Caminhar();
	void Atributos();

	//Métodos para sobrescrever.
	virtual void Atacar();
	virtual void Defender();
	virtual void executar();
	virtual std::string tipoClasse();
	

private:
	//Variáveis privadas inicializando.
	int forca = 1, agilidade = 1, vitalidade = 1, inteligencia = 1, destreza = 1;	
	
	//Métodos privados e atributos.
	std::string classe;
	void AvancoPesado();
	void AumentarForca();

	

};

