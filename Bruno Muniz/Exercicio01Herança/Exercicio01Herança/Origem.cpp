#include<iostream>
#include "PersonagemBase.h"
#include "Guerreiro.h"

using namespace std;

void main()
{
	PersonagemBase  personagem;
	Guerreiro * G1 = new Guerreiro();

	char move;
	int acao,acao2;
	cout << "Escolha a movimentação W-(Cima) A-(Esquerda) S-(Baixo) D-(Direita) ";
	cin >> move;
	if (move == 'w')
		G1->moverCima();
	else if(move == 'a')
		G1->moverEsq();
	else if (move == 's')
		G1->moverBaixo();
	else if (move == 'd')
		G1->moverDir();

	cout << "Escolha uma Ação 1-(Defender) 2-(Atacar) 3-(Estrangular) 4-(Rasteira) 5-(Socar) 6-(Arremessar) ";
	cin >> acao;
	if (acao == 1)
		G1->defender();
	else if (acao == 2)
		G1->atacar();
	else if (acao == 3)
		G1->estrangular();
	else if (acao == 4)
		G1->rasteira();
	else if (acao == 5)
		G1->rasteira();
	else if (acao == 6)
		G1->arremessar();

	cout << "Escolha um comportamento 7-(Gritar) 8-(Correr) 9-(Reparar Armas) 10-(Furia) 11-(Rolar)";
	cin >> acao2;
	if (acao == 7)
		G1->gritar();
	else if (acao == 8)
		G1->correr();
	else if (acao == 9)
		G1->repararArmas();
	else if (acao == 10)
		G1->furia();
	else if (acao == 11)
		G1->rolar();

	system("pause");
}