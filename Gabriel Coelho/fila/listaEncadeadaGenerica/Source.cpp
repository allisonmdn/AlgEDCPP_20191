#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
#include "Fila.h"
#include "Pilha.h"

int main() {
	Fila<Pessoa> * fila_pessoas = new Fila<Pessoa>;
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;
	Pilha<Pessoa> * pilha_pessoas = new Pilha<Pessoa>;

	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	pilha_pessoas->empilhar(pessoa1);
	
	//listaPessoas->insereFimLista();
	//lp_lista_pessoas->insereFimLista(pessoa1);
	
	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;
	pilha_pessoas->desmpilhar
	std::cout << (pessoa1 == pessoa1) << std::endl;
	


	system("pause");
	return 0;
}