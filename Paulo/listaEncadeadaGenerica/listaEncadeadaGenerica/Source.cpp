#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
#include "Fila.h"
#include "Pilha.h"
#include "PratosLavados.h"
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	//Fila<Pessoa> * fila_pessoas = new Fila<Pessoa>;
	//Pilha<Pessoa> * pilha_pessoas = new Pilha<Pessoa>;
	
	
	Pilha<PratosLavados> * listaPratos = new Pilha<PratosLavados>;


	// Definição de pessoas
	//Pessoa * pessoa1;
	//pessoa1 = new Pessoa();
	//pessoa1->s_nome = "Daciolo";
	//pessoa1->i_idade = 40;

	//Pessoa * deux = new Pessoa();
	//deux->s_nome = "DEUX";
	//deux->i_idade = 0;

	//Pessoa * pessoa2 = new Pessoa();
	//pessoa2->s_nome = "Raphael";
	//pessoa2->i_idade = 0;

	//Pessoa * pessoa3 = new Pessoa();
	//pessoa3->s_nome = "Bozo";
	//pessoa3->i_idade = 0;
	//
	//listaPessoas->insereFimLista(pessoa1);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	//listaPessoas->insereInicioLista(deux);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	//listaPessoas->insereFimLista(pessoa2);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	//std::cout << "obterPrimeiroElemento = " << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;
	//std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	//
	//std::cout << "obterElementoEm(0) = " << listaPessoas->obterElementoEm(0)->s_nome << std::endl;
	//std::cout << "obterElementoEm(1) = " << listaPessoas->obterElementoEm(1)->s_nome << std::endl;
	//std::cout << "obterElementoEm(2) = " << listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	//
	//listaPessoas->insereEm(1, pessoa3);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	//std::cout << "obterElementoEm(2) = "<< listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	//std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	//
	//listaPessoas->removePrimeiroNo();
	//std::cout << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;

	//listaPessoas->removeUltimoNo();
	//std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;

	////if (listaPessoas->contemNaLista(pessoa3)) std::cout << "sim \n"; else std::cout << "não \n";
	//listaPessoas->esvaziaLista();
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	//pilha_pessoas->empilhar(pessoa1);
	//listaPessoas->insereFimLista();
	//lp_lista_pessoas->insereFimLista(pessoa1);
	//pilha_pessoas->empilhar(deux);
	//std::cout << pilha_pessoas->desempilhar()->s_nome << std::endl;

	
	int turnos;

	srand(time(0));
	int PL, PS; //PL e pratos lavados e ps e pratos secos

	cout << "Codigo maravilhoso feito por Paulo, Willian e Giovanne\n\n";

	cout << "Quantidade de turnos: ";
	cin >> turnos;

	
	for (int i = 0; i < turnos; i++) {
		PL = rand() % 5 + 1;
		for (int j = 0; j < PL; j++) {
			PratosLavados *P = new PratosLavados;
			listaPratos->empilhar(P);
			cout << "Lavou" << endl;
		}
		PS = rand() % 3 + 1;
		for (int k = 0; k < PS && PL > 0; k++) {
			listaPratos->desempilhar();
			cout << "Secou"<< endl;
			PL--;
		}
		cout << "\n\t-----Fim do turno-----\n\n";
	}

	cout << "Pratos que sobraram no total: " << listaPratos->obtemTamanhoLista() << endl;


	system("pause");
	return 0;
}