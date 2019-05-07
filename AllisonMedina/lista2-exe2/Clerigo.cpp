#include "Clerigo.h"



Clerigo::Clerigo()
{
	setFor(forca);
	setAgi(agi);
	setVit(vit);
	setInt(intel);

}


Clerigo::~Clerigo()
{
}

void Clerigo::Atacar()
{
	std::cout << "PAULADA NA ORELHA!\n";
}

void Clerigo::Defender()
{
	std::cout << "DEFESA DIVINA!\n";
}

void Clerigo::AtaqueMagico()
{
	std::cout << "ATAQUE DE CURA!\n";
}

void Clerigo::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Ataque Físico " << "[Z]Ataque Mágico " << " [c]Defender " << " [d]Caminhar " << " [1]Benção " << " [2]Aumentar Agilidade " << " [3]Curar\n";

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
		this->Bencao();
	}
	else if (_getch() == '2')
	{
		this->Agilidade();
	}
	else if (_getch() == '3')
	{
		this->Curar();
	}
	std::cout << "\n";
}

std::string Clerigo::tipoClasse()
{
	this->c_clerigo = "Clérigo";

	return c_clerigo;
}

void Clerigo::Bencao()
{
	std::cout << "BENÇÃO!\n";

	forca += 10;
	intel += 10;

	setFor(forca);
	setInt(intel);
}

void Clerigo::Agilidade()
{

	std::cout << "AUMENTAR AGILIDADE!\n";

	agi += 10;

	setAgi(agi);
}

void Clerigo::Curar()
{
	std::cout << "CURAR!\n";

}
