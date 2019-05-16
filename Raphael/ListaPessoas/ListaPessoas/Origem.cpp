#include <iostream>
#include "ListaPessoas.h"
#include "Pessoa.h"


void main() {
	ListaPessoas lp_listaPessoas;
	Pessoa * p1 = new Pessoa;
	p1->id = 1;

	Pessoa * p2 = new Pessoa;
	p2->id = 2;

	Pessoa * p3 = new Pessoa;
	p3->id = 3;

	lp_listaPessoas.inserePessoa(p1);
	lp_listaPessoas.inserePessoa(p2);
	lp_listaPessoas.inserePessoa(p3);

	std::cout << "Comprimento Lista = " << lp_listaPessoas.contarPessoas()
		<< std::endl;

	if (lp_listaPessoas.removePessoa(4))
		std::cout << "encontrou e removeu" << std::endl;
	else
		std::cout << "Não Encontrou" << std::endl;


	Pessoa * p = lp_listaPessoas.buscaPessoaPorID(3);
	if (p != nullptr)
		std::cout << "Pessoa Id = " << p->id << std::endl; 
	system("pause");
}