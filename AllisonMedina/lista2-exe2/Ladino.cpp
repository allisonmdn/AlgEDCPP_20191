#include "Ladino.h"



Ladino::Ladino()
{
	setFor(forc);
	setAgi(agi);
	setVit((getVit() - getVit()) + 1);	//Neutralizar atributo.
}


Ladino::~Ladino()
{
}

void Ladino::Atacar()
{
	std::cout << "ATAQUE MUITO VELOZ!\n";
}

void Ladino::Defender()
{
	std::cout << "EVASÃO!\n";
}
  
//Executar ações da classe.

void Ladino::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Atacar " << " [c]Evasão " << " [d]Caminhar " << " [1]Apunhalar " << " [2]Furtar Atributo\n\n";
	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---AÇÕES---\n\n\n";

	if (_getch() == 'z')
	{
		this->Atacar();
	}
	else if (_getch() == 'c')
	{
		this->Defender();
	}
	else if (_getch() == 'd')
	{
		Caminhar();
	}
	else if (_getch() == '1')
	{
		Apunhalar();

	}
	else if (_getch() == '2')
	{
		FurtarAtributo();
	}
	std::cout << "\n";
	
}

std::string Ladino::tipoClasse()
{
	this->c_lad = "Ladino";

	return this->c_lad;
}


void Ladino::Apunhalar()
{
	std::cout << "APUNHALANDO!\n";
}

void Ladino::FurtarAtributo()
{
	std::cout << "FURTANDO ATRIBUTOS!\n";
	
	forc += 1;
	agi += 1;

	setFor(forc);
	setAgi(agi);
}
