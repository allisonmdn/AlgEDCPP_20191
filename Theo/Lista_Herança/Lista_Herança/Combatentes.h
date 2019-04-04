#pragma once
#include "Personagem.h"
#include<string>

using namespace std;

class Guerreiro :
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();
	string estrangular();
	string pegarEspada();
	string pegarArmadura();
	string montarNoCavalo();
	string contraAtacar();


	int getFolego() { return folego; };

private:
	int folego;
	bool temEspada = false, temArmadura = false;
	bool montaria = false;
};


//Classe Barbaro
class Barbaro :
	public Guerreiro
{
public:
	Barbaro();
	~Barbaro();
	string decepar();

private:
	int folego;
};

//Classe Paladino
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();
	string defesaSagrada();

private:
	int folego;

};
