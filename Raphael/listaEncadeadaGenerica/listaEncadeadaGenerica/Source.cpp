#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

int main() {
	
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;

	

	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Giovanne";
	pessoa1->i_idade = 18;

	Pessoa * pessoa2;
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Guilherme";
	pessoa2->i_idade = 20;
	
	//listaPessoas->insereFimLista();
	//lp_lista_pessoas->insereFimLista(pessoa1);
	
	/*Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;*/
	
	listaPessoas->insereFimLista(pessoa1);
	listaPessoas->inserirInicioLista(pessoa2);

	std::cout << listaPessoas->obtemTamanhoLista;


	//std::cout << (pessoa1 == pessoa1) << std::endl;
	


	system("pause");
	return 0;
}