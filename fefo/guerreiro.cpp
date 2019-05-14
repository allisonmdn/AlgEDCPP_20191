#include <iostream>
#include "Guerreiro.h"


void main() 
{

	Guerreiro  * guerreiro = new Guerreiro();

	std::cout << guerreiro->treinar() << std::endl;
	std::cout << guerreiro->lutar() << std::endl;

	system ("pause");
	
}
