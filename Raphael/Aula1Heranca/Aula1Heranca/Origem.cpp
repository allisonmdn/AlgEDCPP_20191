#include<iostream>
#include "Jogo.h"

void main() {
	int per;
	Personagem * personagemJogo;
	Jogo jogo;
	std::cout << "Escolha o Personagem: 1- Mago; 2-Guerreiro" << std::endl;
	std::cin >> per;
	jogo.escolhePersonagem(per);
	personagemJogo = jogo.obterPersonagem();
	Mago * mago = new Mago();
	
	std::cout << personagemJogo->mover() << std::endl;
	std::cout << personagemJogo->quemSoul() << std::endl;
	//jogo.obterPersonagem()->mover();
	system("pause");

}