#include<iostream>
#include"ListaPessoas.h"
#include"Pessoa.h"

using namespace std;

int main() {
	ListaPessoas lp_listaPessoas;
	Pessoa * p1 = new Pessoa;
	p1->id = 1;

	Pessoa * p2 = new Pessoa;
	p2->id = 2;

	int ID = 2;

	lp_listaPessoas.inserePessoa(p1);
	lp_listaPessoas.inserePessoa(p2);

	cout << "Comprimento da lista = " << lp_listaPessoas.contarPessoas() << "\n";

	/*cout << "Informe o ID da pessoal na qual voce quer buscar: ";
	cin >> ID;*/

	cout << "A pessoa com ID = " << ID << " eh " << lp_listaPessoas.buscaPessoaPorID(ID)->id << "\n";

	system("pause");
	return 0;
}