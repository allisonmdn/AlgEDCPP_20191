#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

using namespace std;


int main() {
	
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;
	bool sair = false;
	char opcao = 'm';
	string nome;
	int aux = 0;

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
	listaPessoas->insereFimLista(deux);

	std::cout << (pessoa1 == pessoa1) << std::endl;
	
	while (!sair)
	{
		switch (opcao)
		{
		case 'm'://menu
			cout << "GERENCIADOR DE LISTA DE PESSOAS:\n"
				<< "[F] - inserir pessoa no fim da lista\n"
				<< "[C] - inserir pessoa no inicio da lista\n"
				<< "[P] - inserir pessoa na posicao informada\n"
				<< "[R] - remover o ultimo da lista\n"
				<< "[F] - remover o primeiro da lista\n"
				<< "[T] - obter tamanho da lista\n"
				<< "[V] - verificar se a lista esta vazia\n"
				<< "[N] - procurar pessoa por nome\n"
				<< "[U] - obter ultima pessoa da lista\n"
				<< "[I] - obeter a primeira pessoa da lista\n"
				<< "[L] - obeter pessoa de acordo com a posicao\n"
				<< "[E] - para limpar a tela\n"
				<< "[S] - para sair\n"
				<< "opcao: ";
			cin >> opcao;
			break;

		case 'f'://inserir no fim da lista
			cout << "Informe o nome da pessoa: ";
				cin >> nome;
			cout << "Informe a idade: ";
			cin >> aux;

			//defindo pessoa
			Pessoa * p = new Pessoa;
			p->s_nome = nome;
			p->i_idade = aux;
			listaPessoas->insereFimLista(p);
			opcao = 'm';
			break;

		case 'c'://inserir pessoa no inicio da lista
			cout << "Informe o nome da pessoa: ";
			cin >> nome;
			cout << "Informe a idade: ";
			cin >> aux;

			//defindo pessoa
			Pessoa * p = new Pessoa;
			p->s_nome = nome;
			p->i_idade = aux;
			listaPessoas->inserirInicioLista(p);

			opcao = 'm';
			break;

		case 'p'://inserir pessoa na posicao informada
			cout << "Informe o nome da pessoa: ";
			cin >> nome;
			cout << "Informe a idade: ";
			cin >> aux;

			//defindo pessoa
			Pessoa * p = new Pessoa;
			p->s_nome = nome;
			p->i_idade = aux;

			cout << "Informe a possicao: ";
			cin >> aux;
			listaPessoas->insereEm(aux ,p);

			opcao = 'm';
			break;

		case 'e'://limpar tela
			system("cls");
			opcao = 'm';
			break;

		case 's'://sair
			sair = true;
			break;

		default:
			cout << "Opcao invalida!\n";
			opcao = 'm';
			break;
		}
	}

	system("pause");
	return 0;
}



