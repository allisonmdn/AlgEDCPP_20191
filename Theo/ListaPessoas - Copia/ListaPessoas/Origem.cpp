#include<iostream>
#include"ListaPessoas.h"
#include"Pessoa.h"

using namespace std;

void main()
{
	ListaPessoas lista_Pessoas;
	Pessoa *p1 = new Pessoa;
	p1->ID = 1;

	Pessoa *p2 = new Pessoa;
	p2->ID = 2;

	lista_Pessoas.inserePessoa(p1);
	lista_Pessoas.inserePessoa(p2);

	cout << "Comprimento Lista = " << lista_Pessoas.contarPessoas() << endl;
	cout << "ID da pessoa: " << lista_Pessoas.buscaPessoaPorID(2)->ID << endl;

	system("pause");
}