#pragma once
#include "Noh.h"

template <class T>
class Lista
{
public:
	Lista();
	~Lista();

	int tamanhoLista() { return tamanho; }
	void inserirFimLista(T * conteudo);
	void inserirInicioLista(T * conteudo);
	void inserirEm(T * conteudo, int posicao);
	void removerFimLista();
	void removerInicioLista();
	void esvaziarLista();
	Noh<T> * obterFimLista() { return fimLista; }
	Noh<T> * obterInicioLista() { return inicioLista; }
	Noh<T> * obterEm(int posicao);
	bool listaVazia();
	bool contemNaLista(T * conteudo);



private:
	Noh<T> * inicioLista, *listaAuxiliar, *fimLista;
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
		fimLista = noh;
		tamanho++;
	}
	else
	{
		listaAuxiliar = fimLista;
		fimLista = noh;
		fimLista->setAnterior(listaAuxiliar);
		listaAuxiliar->setProximo(noh);
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
		fimLista = noh;
		tamanho++;
	}
	else
	{
		noh->setProximo(inicioLista);
		inicioLista->setAnterior(noh);
		inicioLista = noh;
		tamanho++;
	}
}

template<class T>
void Lista<T>::inserirEm(T * conteudo, int posicao)
{
	if (posicao == tamanho)
	{
		inserirFimLista(conteudo);
	}
	else if (posicao == 0)
	{
		inserirInicioLista(conteudo);
	}
	else if (posicao < tamanho)
	{
		Noh<T> * noh = new Noh<T>(conteudo);
		listaAuxiliar = inicioLista;

		for (int i = 0; i < posicao; i++)
		{
			listaAuxiliar = listaAuxiliar->getProximo();
		}

		listaAuxiliar->getAnterior()->setProximo(noh);
		noh->setAnterior(listaAuxiliar->getAnterior());
		noh->setProximo(listaAuxiliar);
		listaAuxiliar->setAnterior(noh);

		tamanho++;
	}
}

template<class T>
void Lista<T>::removerFimLista()
{
	if (!listaVazia())
	{
		if (fimLista->getAnterior() == nullptr)
		{
			delete fimLista;
			inicioLista = fimLista = nullptr;
			tamanho--;
		}
		else
		{
			listaAuxiliar = fimLista->getAnterior();
			delete fimLista;
			fimLista = listaAuxiliar;
			tamanho--;
		}
	}
}

template<class T>
void Lista<T>::removerInicioLista()
{
	if (!listaVazia())
	{
		if (inicioLista->getProximo() == nullptr)
		{
			delete inicioLista;
			inicioLista = fimLista = nullptr;
			tamanho--;
		}
		else
		{
			listaAuxiliar = inicioLista->getProximo();
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
		listaAuxiliar = inicioLista->getProximo();
		delete inicioLista;
		inicioLista = listaAuxiliar;
	}
	tamanho = 0;
}

template<class T>
Noh<T> * Lista<T>::obterEm(int posicao)
{
	if (posicao == tamanho - 1)
	{
		return obterFimLista();
	}
	else if (posicao == 0)
	{
		return obterInicioLista();
	}
	else if (posicao < tamanho)
	{
		listaAuxiliar = inicioLista;

		for (int i = 0; i < posicao; i++)
		{
			listaAuxiliar = listaAuxiliar->getProximo();
		}

		return listaAuxiliar;
	}
	return nullptr;
}

template<class T>
bool Lista<T>::contemNaLista(T * conteudo)
{
	listaAuxiliar = inicioLista;
	while (listaAuxiliar != nullptr)
	{
		if (listaAuxiliar->getConteudo() == conteudo)
		{
			return true;
		}
		listaAuxiliar = listaAuxiliar->getProximo();
	}
	return false;
}
