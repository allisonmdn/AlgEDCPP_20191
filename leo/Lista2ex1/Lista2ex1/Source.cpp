#include <iostream>
#include <string>
#include "Personagem.h"
#include "Guerreiro.h"
#include "Paladino.h"
#include "Barbaro.h"
#include "Arqueiro.h"
#include "Ranger.h"
#include "Bardo.h"
#include "Gatuno.h"
#include "Ladino.h"
#include "Mago.h"
#include "Bruxo.h"
#include "Sacerdote.h"
#include "Clerigo.h"
#include "SacerdoteLuz.h"
#include "SacerdoteTrevas.h"


using namespace std;

int main() {
	Guerreiro *pala = new Paladino();
	Paladino pala1;
	Arqueiro *bardo = new Bardo();
	Bardo bardo1;
	Mago *mago = new Bruxo();
	Bruxo bruxo1;

	cout << pala1.GloriaDomini() << endl;
	cout << bardo1.FlechaMelodica() << endl;
	cout << bruxo1.Abracadabra() << endl;
	


	system("pause");
	return 0;
}