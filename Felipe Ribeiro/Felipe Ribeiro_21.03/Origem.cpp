#include "stdafx.h"
#include "Jogo.h"

int  main()
{
	int per;
	Personagem * personagemJogo;
	Jogo jogo;
	std::cout << " Escolha um personagem : 1=Mago , 2=Guerreiro " << std::endl;
	std::cout << "Precione [d] para mover se" << std::endl;
	std::cin >> per;
	jogo.escolhePersonagem(per);
	personagemJogo = jogo.obterPersonagem();

	std::cout << jogo.obterPersonagem()->mover() << std::endl;
	std::cout << jogo.obterPersonagem()->quemSoul() << std::endl;

	system("Pause");

	return 0;

}