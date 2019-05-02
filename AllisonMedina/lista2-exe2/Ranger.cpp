#include "Ranger.h"



Ranger::Ranger()
{
	setFor(getFor() - getFor() + 1);
	setVit(getFor() - getFor() + 1);
	setAgi(agi);
	setDes(des);
}


Ranger::~Ranger()
{
}

std::string Ranger::tipoClasse()
{
	c_ranger = "Ranger";

	return c_ranger;
}

void Ranger::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Atacar " << " [c]Correr " << " [d]Caminhar " << " [1]Rajada Precisa " << " [2]Concentração\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---AÇÕES---\n\n\n";

	if (_getch() == 'z')
	{
		this->AtaqueDistante();
	}
	else if (_getch() == 'c')
	{
		this->Correr();
	}
	else if (_getch() == 'd')
	{
		Caminhar();
	}
	else if (_getch() == '1')
	{
		this->RajadaPrecisa();
	}
	else if (_getch() == '2')
	{
		this->Concentracao();
	}

	std::cout << "\n";
}

void Ranger::AtaqueDistante()
{
	std::cout << "ATAQUE DE LONGA DISTÂNCIA!\n";
}

void Ranger::RajadaPrecisa()
{
	std::cout << "RAJADA PRECISA!\n";
}

void Ranger::Concentracao()
{
	std::cout << "CONCENTRAÇÃO!\n";

	des += 10;

	setDes(des);
}

void Ranger::Correr()
{
	std::cout << "CORRIDA ESTRATÉGICA!\n";

	agi += 10;

	setAgi(agi);
}
