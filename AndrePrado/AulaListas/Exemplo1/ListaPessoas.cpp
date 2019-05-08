#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
	inicioLista = nullptr;
}


ListaPessoas::~ListaPessoas()
{
}

int ListaPessoas::inserePessoa(Pessoa *p)
{
	if (inicioLista == nullptr)
		inicioLista = p;

	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}
		percorreLista->proxima = p;
	}
		

	return 0;
}

int ListaPessoas::removePessoa(int id)
{
	//caso 1 remover o primeiro elemento da lista
	//caso 2 remover o ultimo elemento da lista
	//caso 3 remover um elemento no meio da lista

	//testar se a lista esta vazia
	if (inicioLista != nullptr) {
		// encontrar pessoa
		Pessoa * percorreLista = inicioLista;
		Pessoa * anteriorPerocoreLista = nullptr;
		while (percorreLista->proxima != nullptr && percorreLista->id != id)
		{
			anteriorPerocoreLista = percorreLista;
			percorreLista = percorreLista->proxima;
		}

		if (percorreLista->id == id) {
			//caso 1
			if (percorreLista == inicioLista) {
				inicioLista = percorreLista->proxima;
				delete percorreLista;
				return 1;
			}
			//caso 2
			else if (percorreLista->proxima == nullptr) {
				anteriorPerocoreLista->proxima = nullptr;
				delete percorreLista;
				return 1;
			}
			//caso 3
			else {
				anteriorPerocoreLista->proxima = percorreLista->proxima;
				delete percorreLista;
				return 1;
			}
		}
		//se não encontrar a pessoal
		else {
			std::cout << "Pessoa nao encontrada!\n";
			return 0;
		}
	}
	return 0;
}

int ListaPessoas::contarPessoas()
{
	int ComprimentoLista = 0;
	if (inicioLista == nullptr)
		return 0;

	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;
			ComprimentoLista++;
		}
	}
	return ComprimentoLista;
}

Pessoa * ListaPessoas::buscaPessoaPorID(int id)
{
	Pessoa * percorreLista = inicioLista;
	if (id == inicioLista->id)
		return inicioLista;

	else {
		while (id != percorreLista->id && percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}
		if (percorreLista->id == id)
			return percorreLista;

		else
			return nullptr;
	}
	return nullptr;
}
