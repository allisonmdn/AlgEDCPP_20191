#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

int main() {
	//ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	//No<Pessoa*> * no_pessoa = new No<Pessoa*>;
	No<float> * no_int = new No<float>;
	//No<std::string> * no_s = new No<std::string>;
	//Lista<int> * lista_int = new Lista<int>;
	//Lista<float> * lista = new Lista<float>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;


	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	Pessoa * pessoa2;
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Allison";
	pessoa2->i_idade = 25;

	No<Pessoa*> no_pessoa;

	//no_pessoa->info = pessoa1;

	//no_pessoa->proximo = nullptr;

	std::cout << "Adicionou duas pessoas na lista\n";

	listaPessoas->insereFimLista(pessoa1);
	listaPessoas->inserirInicioLista(pessoa2);
	//lp_lista_pessoas->insereFimLista(pessoa1);
	
	//Pessoa * deux = new Pessoa();
	//deux->s_nome = "DEUX";
	//deux->i_idade = 0;
	std::cout << "Buscou pessoa do inicio da lista\n";

	listaPessoas->contemNaLista(pessoa2,listaPessoas->lista); //Inicio lista.

	std::cout << "Obteve tamanho da lista\n";

	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	
	std::cout << "Removeu primeiro no da lista\n";

	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	std::cout << listaPessoas->removePrimeiroNo() << std::endl;//Remove inicio lista.
	
	std::cout << "Buscou novamente pessoa do inicio da lista\n";

	listaPessoas->contemNaLista(pessoa2, listaPessoas->lista); //Inicio lista.

	std::cout << "Buscou pessoa do fim da lista\n";

	listaPessoas->contemNaLista(pessoa1, listaPessoas->lista); //Fim lista.

	std::cout << "Esvaziei lista\n";

	listaPessoas->esvaziaLista();

	std::cout << "Buscou novamente pessoas adicionadas no inicio e fim da lista\n";

	listaPessoas->contemNaLista(pessoa2, listaPessoas->lista); //Antes estava ao início da lista.
	listaPessoas->contemNaLista(pessoa1, listaPessoas->lista);//Antes estava ao final da lista.

	std::cout << "Buscou novamente o tamanho da lista\n";

	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	

	system("pause");
	return 0;
}