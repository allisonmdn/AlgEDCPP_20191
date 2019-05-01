// FelipeRibeiroAula44.cpp: Define o ponto de entrada para a aplicação de console.

// Como trabalhar com arquivos:

#include "stdafx.h"

// Incluir <fstream> 
#include <fstream>
#include <iostream>


void main()
{
	// Declarar stream
	int n, m, o;

	// Abrir arquivo e verificar se abriu

	std::ofstream arquivo("arq.bin", std::ios::binary);
	if (!arquivo) {
		std::cout << "erro ao abrir o arquivo " << std::endl;
	}
	else {
		//escrevendo
		n = 10;
		m = 1;
		o = 2;

		arquivo.write(reinterpret_cast<const char*>(&n), sizeof(int));
		arquivo.write(reinterpret_cast<const char*>(&m), sizeof(int));
		arquivo.write(reinterpret_cast<const char*>(&o), sizeof(int));
		//fechar arquivo
		arquivo.close();
	}

	// Ler arquivo: ifstream
	std::ifstream ler_arq;
	ler_arq.open("arq.bin", std::ios::in);

	if (ler_arq) {
		int i;
		do {
			std::cout << ler_arq.tellg() << std::endl;
			ler_arq.read(reinterpret_cast<char*>(&i), sizeof(int));
			if (ler_arq.tellg() > 0) {
				std::cout << i << std::endl;
			}
			else {
				ler_arq.seekg(std::ios::end);

			}

		} while (ler_arq && !ler_arq.eof()); {

			//fechar arquivo
			ler_arq.close();
		}
		system("Pause");
	}
}