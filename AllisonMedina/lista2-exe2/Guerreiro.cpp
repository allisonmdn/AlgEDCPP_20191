#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	forca = 10;
	vitalidade = 10;
}


Guerreiro::~Guerreiro()
{
}


void Guerreiro::Caminhar()
{		
	std::cout << "Caminhando!\n";
		
}
 //Atributos padrões.

void Guerreiro::Atributos()
{
	std::cout << "\nFor: " << getFor() << "\n";
	std::cout << "Agi: " << getAgi() << "\n";
	std::cout << "Vit: " << getVit() << "\n";
	std::cout << "Int: " << getInt() << "\n";
	std::cout << "Dex: " << getDes() << "\n";
	std::cout << "-----------------------------" << "\n";

	
}

//Setar atributos.

void Guerreiro::setFor(int f)
{
	forca = f;


}

void Guerreiro::setAgi(int a)
{
	agilidade = a;
}

void Guerreiro::setVit(int v)
{
	vitalidade = v;
	
}

void Guerreiro::setInt(int i)
{
	inteligencia = i;
}

void Guerreiro::setDes(int d)
{
	destreza = d;
}
 //Receber atributos.

int Guerreiro::getFor()
{			

	return forca;	
}

int Guerreiro::getAgi()
{
	
	return agilidade;

}

int Guerreiro::getVit()
{
	
	return vitalidade;
}

int Guerreiro::getInt()
{
	
	return inteligencia;
}

int Guerreiro::getDes()
{
	
	return destreza;
}

void Guerreiro::Atacar()
{

	std::cout << "ATACANDO!\n";

}

void Guerreiro::Defender()
{

	std::cout << "DEFENDER!\n";

}
 //Executar ações da classe.

void Guerreiro::executar()
{
	std::cout << "Classe: " << tipoClasse() ;
	this->Atributos();
	std::cout << "[z]Atacar " << " [c]Defender " << " [d]Caminhar " << " [1]Avanço Pesado " << " [2]Aumentar Força\n\n";

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
		this->AvancoPesado();
	}
	else if (_getch() == '2')
	{
		this->AumentarForca();
	}
	
	std::cout << "\n";
	   	   
}

std::string Guerreiro::tipoClasse()
{
	classe = "Guerreiro";

	return classe;
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
