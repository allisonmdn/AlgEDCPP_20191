#include <iostream>
#include "Jogo.h"
using namespace std;
int main() {
	int per;
	Personagem *personagemJogo;
	Jogo jogo;

	cout << "Informe o personagem:\n1- Mago\n2- Guerreiro\n\n";
	cin >> per;
	jogo.escolhePersonagem(per);

	Mago *mago = new Mago();

	personagemJogo = jogo.obterPersonagem();

	cout << personagemJogo->mover() << endl;
	cout << personagemJogo->quemSou() << endl;

	system("pause");
	return 0;
}