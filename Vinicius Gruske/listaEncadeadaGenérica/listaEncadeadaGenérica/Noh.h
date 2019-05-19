#pragma once

template <class T>
class Noh
{
public:
	Noh(T * c, Noh<T> * p = nullptr, Noh<T> * a = nullptr);
	~Noh();

	void setConteudo(T * c) { conteudo = c; }
	void setProximo(Noh<T> * p) { proximo = p; }
	void setAnterior(Noh<T> * a) { anterior = a; }

	T * getConteudo() { return conteudo; }
	Noh<T> * getProximo() { return proximo; }
	Noh<T> * getAnterior() { return anterior; }

private:
	T * conteudo;
	Noh<T> * proximo;
	Noh<T> * anterior;
};

template<class T>
Noh<T>::Noh(T * c, Noh<T> * p, Noh<T> * a)
{
	conteudo = c;
	proximo = p;
	anterior = a;
}

template <class T>
Noh<T>::~Noh()
{
}
