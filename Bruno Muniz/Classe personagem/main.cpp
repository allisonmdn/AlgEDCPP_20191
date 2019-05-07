#include "PersonagemBase.h"
#include "Guerreiro.h"
#include<iostream>

using namespace std;

void main()
{
	PersonagemBase  personagem;
	Guerreiro G1;
	char move;
	int acao;
	cout << "Escolha a movimentação W-(Cima) A-(Esquerda) S-(Baixo) D-(Direita) ";
		cin >> move;
	if(move== 'w')
	G1.moverCima();
	if (move == 'a')
	G1.moverEsq();
	if (move == 's')
	G1.moverBaixo();
	if (move == 'd')
	G1.moverDir();
	cout << "Escolha uma Ação 1-(Defender) 2-(Atacar) 3-(Estrangular) 4-(Rasteira) 5-(Socar) 6-(Arremessar) ";
	if (acao == 1)
		G1.defender();
	if (acao == 2)
		G1.atacar();
	if (acao == 3)
		G1.estrangular();
	if (acao == 4)
		G1.rasteira();
	if (acao == 5)
		G1.rasteira();
	if (acao == 6)
		G1.arremessar();
	cout << "Escolha um comportamento 7-(Gritar) 8-(Correr) 9-(Reparar Armas) 10-(Furia) 11-(Rolar)";
	if (acao == 7)
		G1.gritar();
	if (acao == 8)
		G1.correr();
	if (acao == 9)
		G1.repararArmas();
	if (acao == 10)
		G1.furia();
	if (acao == 11)
		G1.rolar();

	system("pause");
}