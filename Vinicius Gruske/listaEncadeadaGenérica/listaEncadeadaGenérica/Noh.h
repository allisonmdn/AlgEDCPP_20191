#pragma once

template <class T>
class Noh
{
public:
	Noh(T * c, Noh<T> * p = nullptr);
	~Noh();

	void setConteudo(T * c) { conteudo = c; }
	void setProximoNoh(Noh<T> * p) { proximoNoh = p; }

	T * getConteudo() { return conteudo; }
	Noh<T> * getProximoNoh() { return proximoNoh; }

private:
	T * conteudo;
	Noh<T> * proximoNoh;
};

template<class T>
Noh<T>::Noh(T * c, Noh<T> * p)
{
	conteudo = c;
	proximoNoh = p;
}

template <class T>
Noh<T>::~Noh()
{
}
