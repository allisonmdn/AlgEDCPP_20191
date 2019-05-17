#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

int main() {
template <class T>
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;

	/*
	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	
	//listaPessoas->insereFimLista(Pessoa);
	//lp_lista_pessoas->insereFimLista(pessoa1);

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (pessoa1 == pessoa1) << std::endl;
	*/
	Pessoa * Pessoa2 = new Pessoa;
	Pessoa2->s_nome = "Bruno Muniz";
	Pessoa2->i_idade = 22;
	listaPessoas->inserirInicioLista(Pessoa2);

	Pessoa * pessoa3 = new Pessoa;
	pessoa3->s_nome = "Professor";
	pessoa3->i_idade = 100;
	listaPessoas->insereFimLista(pessoa3);


	system("pause");
	return 0;
}

