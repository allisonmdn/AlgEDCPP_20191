#pragma once
#include <queue>
template<class T>
class Pilha
{
public:
	Pilha();
	~Pilha();
	
	std::queue<T> fila, fila_aux;
	void push(T x);
	T pop();
	T top();
	bool empty();
};

template<class T>
inline Pilha<T>::Pilha()
{
}

template<class T>
inline Pilha<T>::~Pilha()
{
}

template<class T>
inline void Pilha<T>::push(T x)
{
}

template<class T>
inline T Pilha<T>::pop()
{
	return T();
}

template<class T>
inline T Pilha<T>::top()
{
	return T();
}

template<class T>
inline bool Pilha<T>::empty()
{
	return false;
}
