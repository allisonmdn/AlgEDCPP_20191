#include"ListaPessoas.h"
#include"Pessoa.h"

using namespace std;

int main() {
	ListaPessoas lp_listaPessoas;
	Pessoa * p1 = new Pessoa;
	p1->id = 1;

	Pessoa * p2 = new Pessoa;
	p2->id = 2;

	Pessoa * p3 = new Pessoa;
	p3->id = 3;

	int ID; //= 3;
	char opcao = 'm';
	bool sair = false;

	lp_listaPessoas.inserePessoa(p1);
	lp_listaPessoas.inserePessoa(p2);
	lp_listaPessoas.inserePessoa(p3);


	while (sair == false)
	{
		//loop do programa
		switch (opcao)
		{
		case 'm':
			//menu
			cout << "Lista de pessoas: \nr - para remover uma pessoa\nc - para contar pessoas\nb - para buscar pessoa por ID\nl - para limpar a tela\ns - para sair\nOpcao: ";
			cin >> opcao;
			break;
		case 'r':
			//remover pessoa
			cout << "Informe a pessoa que voce quer deletar: ";
			cin >> ID;

			lp_listaPessoas.removePessoa(ID);
			opcao = 'm';
			break;
		case 'c':
			//contar pessoas
			cout << "Comprimento da lista = " << lp_listaPessoas.contarPessoas() << "\n";
			opcao = 'm';
			break;
		case 'b':
			//buscar pessoa
			cout << "Informe o ID da pessoal na qual voce quer buscar: ";
			cin >> ID;

			cout << "A pessoa com ID = " << ID << " eh " << lp_listaPessoas.buscaPessoaPorID(ID)->id << "\n";
			opcao = 'm';
			break;
		case 'l':
			system("cls");
			opcao = 'm';
			break;
		case 's':
			//sair do programa
			sair = true;
			break;
		default:
			cout << "Comando invalido!\n";
			opcao = 'm';
			break;
		}

	}
	

	system("pause");
	return 0;
}