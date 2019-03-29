#include"Personagem.h"
#include"Combatentes.h"
#include"Mago.h"
#include"Ladino.h"
#include"Ranger.h"
#include"Bardo.h"
#include"Clerigo.h"
#include"SacerdoteLuz.h"
#include"SacerdoteTrevas.h"
#include<iostream>

int main() 
{
	//Testes
	Mago *mago = new Mago();
	Barbaro *barbaro = new Barbaro();
	Guerreiro *guerreiro = new Guerreiro();
	
	/*cout << mago->lancarMagia() << endl;
	cout << mago->mover() << endl;
	cout << barbaro->decepar() << endl;*/
	cout << guerreiro->contraAtacar() << endl;

	system("pause");
}


