#include"Guerreiro.h"

int main()
{
	Guerreiro guerreiro;

	guerreiro.setNome("Arthur");

	cout << "Meu nome eh " << guerreiro.getNome() << endl;
	cout << "Eu sou um " << guerreiro.getClasse() << endl;

	cout << "Posicao: " << guerreiro.getPosicao() << endl;

	guerreiro.mover();
	
	cout << "Posicao: " << guerreiro.getPosicao() << endl;

	system("pause");
	return 0;
}