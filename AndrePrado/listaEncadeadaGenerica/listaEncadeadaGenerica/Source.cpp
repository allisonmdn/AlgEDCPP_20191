#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"

int main() {
	ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	
	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	lp_lista_pessoas->insereFimLista(pessoa1);
	
	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (pessoa1 == pessoa1) << std::endl;
	

		

	system("pause");
	return 0;
}