#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

int main() {

	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;


	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	listaPessoas->inserirInicioLista(pessoa1);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	std::cout << listaPessoas->mostrarElementosLista() << std::endl;

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	//std::cout << (pessoa1 == pessoa1) << std::endl;

	system("pause");
	return 0;
}