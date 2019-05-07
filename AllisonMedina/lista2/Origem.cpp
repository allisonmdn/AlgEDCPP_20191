#include <iostream>
#include "Guerreiro.h"

void main()
{
	Guerreiro guerreiro;
	
	char op2 = 1;

	mudarclasse:
	guerreiro.classeEscolhida();

	while (_getch() != 0)
	{
		guerreiro.executar();
		if (_getch == 0)
		{
			goto mudarclasse;
		}
	}


	system("pause");
}