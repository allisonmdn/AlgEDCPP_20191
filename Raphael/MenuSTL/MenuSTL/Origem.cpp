#include<iostream>
#include<array>
#include "Menu.h"
#include <stack>
void main() {
	int opcao;
	std::array<Menu, 10> g_menus; //array stl
	//Menu g_menus[10];
	
	//Declaração da pilha usando a Stack da STL
	std::stack<Menu *> s_pilha_menus;

	//Inicializar Menu Main
	g_menus[0].m_opcoes[0] = "Novo Jogo";
	g_menus[0].m_opcoes_indice[0] = 0;
	g_menus[0].m_opcoes[1] = "Carregar Jogo";
	g_menus[0].m_opcoes_indice[1] = 0;
	g_menus[0].m_opcoes[2] = "Salvar Jogo";
	g_menus[0].m_opcoes_indice[2] = 0;
	g_menus[0].m_opcoes[3] = "Opções";
	g_menus[0].m_opcoes_indice[3] = 1;
	g_menus[0].m_opcoes[4] = "Sair";
	g_menus[0].m_opcoes_indice[4] = 0;
	g_menus[1].m_opcoes[0] = "Som";
	g_menus[1].m_opcoes_indice[0] = 2;
	g_menus[1].m_opcoes[1] = "Gráfico";
	g_menus[1].m_opcoes_indice[1] = 3;
	g_menus[2].m_opcoes[0] = "Volume Musica";
	g_menus[2].m_opcoes_indice[0] = 5;
	g_menus[2].m_opcoes[1] = "Volume Jogo";
	g_menus[2].m_opcoes_indice[1] = 6;
	g_menus[3].m_opcoes[0] = "Resolucao";
	g_menus[3].m_opcoes_indice[0] = 7;


	//inicializa pilha com menu Main
	s_pilha_menus.push(&g_menus[0]);
	//Acessa menu
	s_pilha_menus.top()->desenhaMenu();
	while (true) { //loop do jogo
		//Seleção de Opções
		std::cout << std::endl;
		std::cout << "Informe uma opcao" << std::endl;
		std::cin >> opcao;
		if (opcao == -1) {
			if (s_pilha_menus.top() != &g_menus[0])
				s_pilha_menus.pop();
				system("CLS");
				s_pilha_menus.top()->desenhaMenu();
		}

		//empilha menu selecionado
		if (opcao > 0) {
			s_pilha_menus.push(&g_menus[opcao]);
			system("CLS");
			s_pilha_menus.top()->desenhaMenu();
		}
		if (opcao == -2)//sai do jogo
			break;
	}
	system("pause");
}
