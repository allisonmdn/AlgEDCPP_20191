#include "SacerdoteDasTrevas.h"



SacerdoteDasTrevas::SacerdoteDasTrevas()
{
}


SacerdoteDasTrevas::~SacerdoteDasTrevas()
{
}

void SacerdoteDasTrevas::Atacar()
{
	std::cout << "CAJADADA SOMBRIA!\n";
}

void SacerdoteDasTrevas::Defender()
{
	std::cout << "ESCUDO DAS TREVAS!\n";
}

void SacerdoteDasTrevas::AtaqueMagico()
{
	std::cout << "ATAQUE DE MAGIA!\n";
}

void SacerdoteDasTrevas::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Ataque Físico " << "[Z]Ataque Mágico " << " [c]Defender " << " [d]Caminhar " << " [1]Benção " << " [2]Aumentar Agilidade " << " [3]Curar\n" << " [4]Absorver Identidade" << " [5]Escuridão Suprema\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---AÇÕES---\n\n\n";

	if (_getch() == 'z')
	{
		Atacar();
	}
	else if (_getch() == 'Z')
	{
		AtaqueMagico();
	}
	else if (_getch() == 'c')
	{
		Defender();
	}
	else if (_getch() == 'd')
	{
		Caminhar();
	}
	else if (_getch() == '1')
	{
		Clerigo::Bencao();
	}
	else if (_getch() == '2')
	{
		Clerigo::Agilidade();
	}
	else if (_getch() == '3')
	{
		Clerigo::Curar();
	}
	else if (_getch() == '4')
	{
		this->AbsorverIdentidade();
	}
	else if (_getch() == '5')
	{
		this->EscuridaoSuprema();
	}
	std::cout << "\n";
}

std::string SacerdoteDasTrevas::tipoClasse()
{
	this->c_sacertrevas = "Sacerdote das Trevas\n";

	return c_sacertrevas;
}

void SacerdoteDasTrevas::EscuridaoSuprema()
{
	srand(time(NULL));

	op_esc = rand() % 5;
   
	switch (op_esc)
	{
	case SOLIDAO: std::cout << "VOCÊ ESTÁ SOZINHO!\n";
		break;
	case ODIO: std::cout << "ODEIO VOCÊ!\n";
		break;
	case EGOISMO: std::cout << "NÃO ME INTERESSA, FAZ ISSO SOZINHO, RAPAZ!\n";
		break;
	case LUXURIA: std::cout << "SEU DEPRAVADO!\n";
		break;
	case GANANCIA: std::cout << "EU QUERO O QUE É SEU!\n";
		break;	 		
	}
	
}

void SacerdoteDasTrevas::AbsorverIdentidade()
{
	std::cout << "SUA IDENTIDADE AGORA É MINHA!\n";
}
