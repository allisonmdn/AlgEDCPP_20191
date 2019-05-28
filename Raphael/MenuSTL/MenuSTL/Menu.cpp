#include "Menu.h"



Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::desenhaMenu()
{
	for (int i = 0; i < 5 ; i++)
		if (m_opcoes[i] != "") {
			std::cout << m_opcoes_indice[i] << " - " << m_opcoes[i] << std::endl;
		}
}
