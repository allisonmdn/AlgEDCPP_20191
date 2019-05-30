#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
#include "Fila.h"
#include "Pilha.h"

int main() {

	Fila<Pessoa> * fila_pessoas = new Fila<Pessoa>;
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;
	Pilha<Pessoa> * pilhaDePessoas = new Pilha<Pessoa>;

	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	pilhaDePessoas->empilhar(pessoa1);

	Pessoa * pessoa2;
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Daciolo";
	pessoa2->i_idade = 40;

	listaPessoas->inserirInicioLista(pessoa1);
	listaPessoas->inserirInicioLista(pessoa2);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	//Mostrar elementos na tela
	for (int i = 0; i < listaPessoas->obtemTamanhoLista(); i++)
	{
		std::cout << listaPessoas->obterElementoEm(i) << std::endl;
	}

	//std::cout << (pessoa1 == pessoa1) << std::endl;

	system("pause");
	return 0;
}