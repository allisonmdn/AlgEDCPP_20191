#include "Arma.h"



Arma::Arma()
{
}


Arma::~Arma()
{
}

void Arma::recarregarMunicao()
{
	std::cout << "Nenhum tipo de municao definida.\n";
}

void Arma::disparar()
{
	std::cout << "Tentativa de disparo FALHOU!\n";
	tipoArma();
	std::cout << " Portanto, nao pode ser disparada.\n";
	
}

void Arma::tipoArma()
{
	
	std::cout << "Nenhuma arma definida!";	
	
}
