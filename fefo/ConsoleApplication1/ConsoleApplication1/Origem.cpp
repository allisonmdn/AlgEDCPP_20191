#include <iostream>
#include "Guerreiro.h"
#include "stdafx.h"
#include <iostream>

void main() 
{

	Guerreiro  * guerreiro = new Guerreiro();

	std::cout << guerreiro->treinar() << std::endl;
	std::cout << guerreiro->lutar() << std::endl;

	system ("pause");
	
}
