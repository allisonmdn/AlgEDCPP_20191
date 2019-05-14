#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
	inicioLista = nullptr;
}


ListaPessoas::~ListaPessoas()
{
}

int ListaPessoas::inserePessoa(Pessoa * p)
{
	if (inicioLista == nullptr)
		inicioLista = p;
	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr) {
			percorreLista = percorreLista->proxima;
		}
		percorreLista->proxima = p;

	}
	return 0;
}

int ListaPessoas::inserePessoaDecrescenteID(Pessoa * p)
{
	return 0;
}

int ListaPessoas::removePessoa(int id)
{
	//testar se a lista ta vazia
	if (inicioLista != nullptr) {
		//encontrar a pessoa
		Pessoa * percorreLista = inicioLista;
		Pessoa * anteriorPercorreLista = inicioLista;
		while (percorreLista != nullptr)
		{
			if (percorreLista == inicioLista && percorreLista->id == id) {
				//caso1: remover o primeiro elemento da lista
				//a primeira pessoa é que vai ser removida
				inicioLista = percorreLista->proxima;
				delete percorreLista;
				return 1;
			}
			else if (percorreLista->id == id) {
				//caso2: remover o ultimo elemento da lista
				anteriorPercorreLista->proxima = percorreLista->proxima;
				delete percorreLista;
				return 1;
			}
			else {
				//caso4: não encontrou a pessoa
				anteriorPercorreLista = percorreLista;
				percorreLista = percorreLista->proxima;
			}
		}
		return 0;
		
	}
	return 0;
}

int ListaPessoas::contarPessoas()
{
	int comprimentoLista = 0;
	if (inicioLista == nullptr)
		return 0;
	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista != nullptr) {
			percorreLista = percorreLista->proxima;
			comprimentoLista++;
		}
	}
	return comprimentoLista;
}

Pessoa * ListaPessoas::buscaPessoaPorID(int id)
{
	if (inicioLista == nullptr)
		return nullptr;
	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr) {
			if (percorreLista->id == id) {
				return percorreLista;
			}
			percorreLista = percorreLista->proxima;
		}
	}
	return nullptr;
}

Pessoa * ListaPessoas::consultaPessoas()
{
	
	return 0;
}
