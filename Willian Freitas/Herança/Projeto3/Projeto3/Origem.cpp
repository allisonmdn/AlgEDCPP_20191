#include <iostream>
#include "jogo.h"

using namespace std;
void main() {
	personagem * personagemJogo;
	int per;
	jogo jogo;
	cout << "Informe o Personagem: 1- Mago; 2- Guerreiro" << endl;
	cin >> per;
	jogo.escolherPersonagem(per);
	personagemJogo = jogo.obterPersonagem();
	cout << personagemJogo->quemSoul();

	cout << personagemJogo->mover();

	system("pause");
}