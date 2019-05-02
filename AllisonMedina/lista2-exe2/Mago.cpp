#include "Mago.h"



Mago::Mago()
{
	setVit(vit);
	setInt(intel);
	setFor((getFor() - getFor()) + 1);	//Neutralizar atributo.
}


Mago::~Mago()
{
}

void Mago::Atacar()
{
	std::cout << "CAJADADA!\n";
}

void Mago::Defender()
{
	std::cout << "ESCUDO DE MANA!\n";
}

void Mago::AtaqueMagico()
{
	std::cout << "ATAQUE MÁGICO!\n";
}

void Mago::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Cajadada " << "[Z]Ataque Mágico " << " [c]Escudo de Mana " << " [d]Caminhar " << " [1]Bola de Fogo " << " [2]Nevasca " << " [3]Amplificar Magia\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---AÇÕES---\n\n\n";

	if (_getch() == 'z')
	{
		this->Atacar();
	}
	else if (_getch() == 'Z')
	{
		AtaqueMagico();
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
		this->BoladeFogo();
	}
	else if (_getch() == '2')
	{
		this->Nevasca();
	}
	else if (_getch() == '3')
	{			
		this->AmplificarMagia();
	} 	
	std::cout << "\n";
}

std::string Mago::tipoClasse()
{
	this->c_mago = "Mago";

	return this->c_mago;
}

void Mago::BoladeFogo()
{
	std::cout << "BOLA DE FOGO!\n";
}

void Mago::Nevasca()
{
	std::cout << "NEVASCA!\n";
}

void Mago::AmplificarMagia()
{
	std::cout << "AMPLIFICANDO MAGIA!\n";

	intel += 20;

	setInt(intel);

}
