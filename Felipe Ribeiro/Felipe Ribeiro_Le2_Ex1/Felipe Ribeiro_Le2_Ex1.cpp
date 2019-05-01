// Felipe Ribeiro_Le2_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "string"
#include "pch.h"
#include <iostream>
#include "Guerreiro.h"

using namespace std;

int main()
{
	int resposta = 0;

	cout << "                                                                                     " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------      RPG - DRAGONS OF C++    ----------------------------" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "		Voce, um imponente guerreiro, caminha por uma longa e tediosa estrada de terra" << endl;
	cout << "    atravessando a escuridao de uma floresta durante a noite." << endl;
	cout << "		No ceu estrelado a lua ilumina levemente parte da vegetacao ao seu redor. " << endl;
	cout << "		Ouve-se passos rapidos atras das arvores e algo grande e forte sai de dentro" << endl;
	cout << "    da mata e corre com velocidade em sua direcao. " << endl;
	cout << " ------------------------------------------------------------------------------------" << endl;
	cout << "       Oque voce faz ???    (1)Soco  (2)Chute (3)Haduken (4)Fugir (5)Gritar."<< endl;                                             
	
	cin >> resposta;
	if (resposta == 1) {
		Guerreiro * G1 = new Guerreiro(1);
		cout << " Voce esquiva e disfere um " << G1->acao << " na cara do monstro, sua forca de " << G1->force << " e mais que" << endl;
		cout << "o bastante para deixa-lo inconsciente. " << endl;

	}
	else if (resposta == 2) {
		Guerreiro * G1 = new Guerreiro(2);
		cout << "   Sua adrenalina dispara e sua forca atinge " << G1->force << " , voce inclina seu corpo para a"<< endl;
		cout << "esquerda e com suas botas de metal e sua dextreza de valor " << G1->dexterity << " , da um grande " << G1->acao << endl;
		cout << "no estomado do infeliz, ele agora jaz diante de ti. " << endl;
	}
	else if (resposta == 3) {
		Guerreiro * G1 = new Guerreiro(3);
		cout << "   Apesar de suas habilidades magicas serem de apenas " << G1->magic << " , e possuir apenas " << G1->mana << endl;
		cout << " de mana, voce se erforca e solta um " << G1->acao<< " na direcao do agressor."<< endl;
		cout << "   E um monstro, ele fica ferido e foge em direcao a mata. " << endl;
	
	}
	else if (resposta == 4) {
		Guerreiro * G1 = new Guerreiro(4);
		cout << "   Sem pensar duas vezes, voce engole seu orgulho e decide " << G1->acao << " na direcao oposta. " << endl;
		cout << "   Surpreso com sua reacao, o monstro decide que voce nao vale o esforco, e decide esperar por" << endl;
		cout << " uma vitima que lhe traga maior satisfacao. "<< endl;
		cout << "   Sua moral esta despedacada, e sua forca se reduz a miseros " << G1->force << " pontos." << endl; 
	}
	else if (resposta == 5) {
		Guerreiro * G1 = new Guerreiro(5);
		cout << "   O desespero toma conta de seu corpo, sua forca e "<< G1->force <<" e voce e incapaz de se mover."<< endl;
		cout << "   Voce entao resolve " << G1->acao << " , mas diferente de voce, a criatura nao se acovarda e corre " << endl;
		cout << " investindo contra seu pescoco. As garras da criatura acertam sua jugular expondo parte de sua"<< endl;
		cout << " coluna cervical." << endl;
		cout << "   Nao ha mais nada que possa fazer, sua vida agora e "<< G1->life <<" ."<< endl;
		cout << "-----------------------------------------------------------------------------------------------------" << endl;
		cout << "-------------------------------------\\\\\  GAME OVER /////------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------------------------------------------" << endl;
	}
	else {}
	



}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
