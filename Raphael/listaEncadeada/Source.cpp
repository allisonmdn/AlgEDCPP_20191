#include <iostream>
#include "No.h"
#include "Lista.h"


int main() {
	
	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	
	////adicionar esta pessoa no nó.
	No * n_no = new No;
	n_no->info = pessoa1;
	n_no->proximo = nullptr;

	//Declarar a lista
	Lista * l_lista = new Lista;
	l_lista->insereFimLista(n_no);
	////adicionar o nó na lista
	//n_lista_pessoas = n_no;
	
	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (pessoa1 == pessoa1) << std::endl;
	//std::cout << pessoa1 == deux << std::endl;
	//No * n_no1 = new No;
	//n_no1->pessoa = DEUX;
	//n_no1->proximo = nullptr;
	////adicionar novo nó na lista
	//n_lista_pessoas->proximo = n_no1;

	//Pessoa * eymael = new Pessoa;
	//eymael->s_nome = "Eyeyeymael";
	//eymael->i_idade = 65;
	//
	//No * n_no2 = new No;
	//n_no2->pessoa = eymael;
	//n_no2->proximo = nullptr;

	//adicionando novo nó na lista
	//n_lista_pessoas->proximo->proximo = n_no2;

	
	

	system("pause");
	return 0;
}