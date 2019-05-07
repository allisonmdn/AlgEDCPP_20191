#include "Bardo.h"



Bardo::Bardo()
{
	setFor(getFor() - getFor() + 1);
	setVit(vit);
	setDes(des);
}


Bardo::~Bardo()
{
}

std::string Bardo::tipoClasse()
{
	c_bardo = "Bardo";

	return c_bardo;
}

void Bardo::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Atacar " << " [c]Can��o da Distra��o " << " [d]Caminhar " << " [1]Piada Infame " << " [2]Can��o da Fartura " << " [3]Can��o En�rgica\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---A��ES---\n\n\n";

	if (_getch() == 'z')
	{
		this->AtaqueMusical();
	}
	else if (_getch() == 'c')
	{
		this->CancaoDaDistracao();
	}
	else if (_getch() == 'd')
	{
		this->Caminhar();
	}
	else if (_getch() == '1')
	{
		this->PiadaInfame();
	}
	else if (_getch() == '2')
	{
		this->CancaoDaFartura();
	}
	else if (_getch() == '3')
	{
		this->CancaoEnergica();
	}

	std::cout << "\n";
}

void Bardo::CancaoDaFartura()
{
	std::cout << "CAN��O DA FARTURA! VIDA LONGA!\n";

	vit += 10;

	setVit(vit); 
}

void Bardo::PiadaInfame()
{
	srand(time(NULL));

	op = rand() % 6;

	switch (op)
	{
	case ARANHA:
		std::cout << "Por que a aranha � o animal mais carente do mundo?\n Porque ela � um aracNEEDYOU!\n";
		break;
	case PINHEIRO:
		std::cout << "Porque o pinheiro n�o se perde na floresta?\n Porque ele tem uma pinha (um mapinha)!\n";
		break;
	case PINTINHOCAIPIRA:
		std::cout << "Sabe como � a piada do pintinho caipira?\n Pir!\n";
		break;
	case PAGODEIRO:
		std::cout << "O que o pagodeiro foi fazer na igreja?\n Foi cantar 'p� God'!\n";
		break;
	case NAPOLEAO:
		std::cout << "Porque o Napole�o era chamado sempre para as festas na Fran�a?\n Porque ele era 'BOM NA PARTY'!\n";
		break;
	case PLANTINHA:
		std::cout << "A plantinha foi ao hospital, mas n�o foi atendida. Por qu�?\n Porque s� tinha m�dico de PLANT�O!\n";
			break;
	}



}

void Bardo::CancaoDaDistracao()
{
	std::cout << "OLHA, UM GATO!\n";
}

void Bardo::CancaoEnergica()
{
	std::cout << "LEVANTEM AS M�OS E BORA CANTAR!\n";
}

void Bardo::AtaqueMusical()
{
	std::cout << "VIOLINADA!\n";
}
