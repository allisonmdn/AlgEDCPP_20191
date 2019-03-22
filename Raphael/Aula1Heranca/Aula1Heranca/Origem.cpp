#include<iostream>
#include "Jogo.h"

void main() {
	int per;
	
	Jogo jogo;
	std::cout << "Escolha o Personagem: 1- Mago; 2-Guerreiro" << std::endl;
	std::cin >> per;
	jogo.escolhePersonagem(per);
	
	
	std::cout << jogo.obterPersonagem()->mover() << std::endl;
	std::cout << jogo.obterPersonagem()->quemSoul() << std::endl;
	//jogo.obterPersonagem()->mover();
	system("pause");

}