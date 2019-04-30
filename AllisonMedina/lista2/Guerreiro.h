#pragma once
#include <iostream>
#include <string>
#include <conio.h>

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	void Caminhar();
	virtual void Atributos();
	virtual void Atacar();
	virtual void Defender();
	virtual void executar();
	virtual void classeEscolhida();

private:

	int forca, agilidade, vitalidade, inteligencia, destreza;
	char mov;
	void AvancoPesado();
	void AumentarForca();
	std::string classe;
	char op_classe;

};

