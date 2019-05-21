#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
#include <iostream>

int main() {

	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;


	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	listaPessoas->insereFimLista(pessoa1);
	//lp_lista_pessoas->insereFimLista(pessoa1);

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (listaPessoas->getUltimoElemento()->s_nome) << std::endl;



	system("pause");
	return 0;
}