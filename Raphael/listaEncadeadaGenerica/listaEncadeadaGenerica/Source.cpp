#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include "Pessoa.h"

int main() {
	ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	No<Pessoa*> * no_pessoa = new No<Pessoa*>;
	No<float> * no_int = new No<float>;
	No<std::string> * no_s = new No<std::string>;
	Lista<int> * lista_int = new Lista<int>;
	Lista<float> * lista = new Lista<float>;
	Lista<Pessoa *> * listaPessoas = new Lista<Pessoa>;


	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	No<Pessoa *> no_pessoa;
	no_pessoa->info = &pessoa1;
	no_pessoa->proximo = nullptr;
	listaPessoas->insereFimLista(no_pessoa);
	//lp_lista_pessoas->insereFimLista(pessoa1);
	
	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (pessoa1 == pessoa1) << std::endl;
	


	system("pause");
	return 0;
}