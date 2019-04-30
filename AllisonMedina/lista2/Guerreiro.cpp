#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::Caminhar()
{
	if (mov == 'd')
	{
		std::cout << "Caminhando!\n";
	}
	else if (mov == 'dd')
	{
		std::cout << "Correndo!\n";
	}
}

void Guerreiro::Atributos()
{
	this->forca = 10;
	this->agilidade = 1;
	this->vitalidade = 10;
	this->inteligencia = 1;
	this->destreza = 1;
	
	std::cout << "For: " << forca << "\n";
	std::cout << "Agi: " << agilidade << "\n";
	std::cout << "Vit: " << vitalidade << "\n";
	std::cout << "Int: " << inteligencia << "\n";
	std::cout << "Dex: " << destreza << "\n";
	std::cout << "-----------------------------" << "\n";
}

void Guerreiro::Atacar()
{
	
	std::cout << "ATACANDO!\n";
	
}

void Guerreiro::Defender()
{
	
	std::cout << "DEFENDER!\n";

}

void Guerreiro::executar()
{
	//std::cout << "classe: " << classe << "\n";

	this->Atributos();
	
	//classeEscolhida();

	
		std::cout << "PARA VOLTAR, DIGITE [0]\n";

		if (mov == 'z')
		{
			this->Atacar();
		}
		else if (mov == 'c')
		{
			this->Defender();
		}
		else if (mov == '1')
		{
			this->AvancoPesado();
		}
		else if (mov == '2')
		{
			this->AumentarForca();
		}
	
		
}

void Guerreiro::classeEscolhida()
{
	std::cout << "Escolha uma classe: [1] Guerreiro\n";
	op_classe = std::cin.get();
	switch (op_classe)
	{
	case 1:classe = "Guerreiro\n";
		break;
	default: std::cout << "Classe indefinida\n";
		
	}
		
}

void Guerreiro::AvancoPesado()
{
	std::cout << "INVESTIDA PESADA!\n";
	
}

void Guerreiro::AumentarForca()
{
	std::cout << "AUMENTANDO FORCA!\n";
	this->forca += 5;
	
}

