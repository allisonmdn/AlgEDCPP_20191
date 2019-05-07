#include "Barbaro.h"



Barbaro::Barbaro()
{
	setFor(forca);
	setVit(vit);
	setAgi(agi);
}


Barbaro::~Barbaro()
{
}

void Barbaro::Atacar()
{
	std::cout << "ESPADADA BRUTA!\n";
}

void Barbaro::Defender()
{
	std::cout << "BLOQUEIO DE ESPADAS!\n";
}

void Barbaro::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Atacar " << " [c]Defender " << " [d]Caminhar " << " [1]Rachar Crânio " << " [2]Ativar Brutalidade\n\n";

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
		this->Caminhar();
	}
	else if (_getch() == '1')
	{
		this->RacharCranio();
	}
	else if (_getch() == '2')
	{
		this->AtivarBrutalidade();
	}

	std::cout << "\n";
}

std::string Barbaro::tipoClasse()
{
	this->c_barbaro = "Bárbaro";

	return c_barbaro;
}

void Barbaro::RacharCranio()
{
	std::cout << "RACHAR CRÂNIO!\n";
}

void Barbaro::AtivarBrutalidade()
{
	std::cout << "ATIVANDO MODO PORRA LOUCA!\n";

	forca += 50;
	agi += 50;
	vit += 50;

	setFor(forca);
	setVit(vit);
	setAgi(agi);
}
