#include<iostream>
#include"Jogo.h"

using namespace std;

void main() {
	int per;
	Jogo jogo;
	
	
	cout << "Escolha o personagem: 1 - Mago; 2 - Guerreiro" << endl;
	cin >> per;
	jogo.escolhePersonagem(per);
	

	cout << jogo.getPersonagem()->mover() << endl;
	cout << jogo.getPersonagem()->quemSou() << endl;

	system("pause");
}