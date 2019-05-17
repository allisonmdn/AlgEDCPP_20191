#pragma once
#include "Noh.h"

template <class T>
class Lista
{
public:
	Lista();
	~Lista();

	bool listaVazia();
	int tamanhoLista() { return tamanho; }
	void inserirFimLista(T * conteudo);
	void inserirInicioLista(T * conteudo);
	void inserirEm(T * conteudo, int posicao);
	void removerFimLista();
	void removerInicioLista();
	void esvaziarLista();

private:
	Noh<T> * inicioLista, * listaAuxiliar;
	int tamanho;
};

template<class T>
Lista<T>::Lista()
{
	inicioLista = nullptr;
	listaAuxiliar = nullptr;
	tamanho = 0;
}

template<class T>
Lista<T>::~Lista()
{
}

template<class T>
bool Lista<T>::listaVazia()
{
	return (inicioLista == nullptr);
}

template<class T>
void Lista<T>::inserirFimLista(T * conteudo)
{
	Noh<T> * noh = new Noh<T>(conteudo);

	if (listaVazia())
	{
		inicioLista = noh;
		tamanho++;
	}
	else
	{
		listaAuxiliar = inicioLista;

		while (listaAuxiliar->getProximoNoh() != nullptr)
		{
			listaAuxiliar = listaAuxiliar->getProximoNoh();
		}

		listaAuxiliar->setProximoNoh(noh);
		tamanho++;
	}
}

template<class T>
void Lista<T>::inserirInicioLista(T * conteudo)
{
	Noh<T> * noh = new Noh<T>(conteudo);

	if (listaVazia())
	{
		inicioLista = noh;
		tamanho++;
	}
	else
	{
		noh->setProximoNoh(inicioLista);
		inicioLista = noh;
		tamanho++;
	}
}

template<class T>
void Lista<T>::inserirEm(T * conteudo, int posicao)
{
	Noh<T> * noh = new Noh<T>(conteudo);

	if (posicao == tamanho)
	{
		inserirFimLista(conteudo);
	}
	else if (posicao == 0)
	{
		inserirInicioLista(0);
	}
	else if (posicao < tamanho)
	{
		listaAuxiliar = inicioLista;

		for (int i = 0; i < tamanho - 1; i++)
		{
			listaAuxiliar = listaAuxiliar->getProximoNoh();
		}
		noh->setProximoNoh(listaAuxiliar->getProximoNoh());
		listaAuxiliar->setProximoNoh(noh);
		tamanho++;
	}
}

template<class T>
void Lista<T>::removerFimLista()
{
	if (!listaVazia())
	{
		listaAuxiliar = inicioLista;

		if (listaAuxiliar->getProximoNoh() == nullptr)
		{
			delete listaAuxiliar;
			inicioLista = nullptr;
			tamanho--;
		}
		else
		{
			while (listaAuxiliar->getProximoNoh()->getProximoNoh() != nullptr)
			{
				listaAuxiliar = listaAuxiliar->getProximoNoh();
			}
			delete listaAuxiliar->getProximoNoh();
			listaAuxiliar->setProximoNoh(nullptr);
			tamanho--;
		}
	}
}

template<class T>
void Lista<T>::removerInicioLista()
{
	if (!listaVazia())
	{
		if (inicioLista->getProximoNoh() == nullptr)
		{
			delete inicioLista;
			inicioLista = nullptr;
			tamanho--;
		}
		else
		{
			listaAuxiliar = inicioLista->getProximoNoh();
			delete inicioLista;
			inicioLista = listaAuxiliar;
			tamanho--;
		}
	}
}

template<class T>
void Lista<T>::esvaziarLista()
{
	listaAuxiliar = inicioLista;
	while (listaAuxiliar != nullptr)
	{
		listaAuxiliar = inicioLista->getProximoNoh();
		delete inicioLista;
		inicioLista = listaAuxiliar;
	}
	tamanho = 0;
}
