#include<iostream>
#include<fstream>
#include"Pessoa.h"
#include<string>
void main() {

	Pessoa * p = new Pessoa;
	p->nome = "raphael";
	p->telefone = "519xxxx-xxxx";
	std::ofstream arquivo("agenda.bin", std::ios::binary | std::ios::out);
	if (arquivo.is_open()) {
		arquivo.write(reinterpret_cast<char *>(&p) , sizeof(Pessoa));
	}
	else {
		std::cout << "erro ao abrir arquivo";
	}
	arquivo.close();
	std::ifstream arq;
	arq.open("agenda.bin", std::ios::binary | std::ios::in);
	Pessoa * p1 = new Pessoa;
	if (arq.is_open()) {
		arq.read(reinterpret_cast<char *>(&p1), sizeof(Pessoa));
	}else 
		std::cout << "erro ao abrir arquivo";
	
	std::cout << "Nome: " << p1->nome << " Telefone: " << p1->telefone << std::endl;
	arq.close();
	system("pause");
}