#pragma once
#include <queue>
template<class T>
class Pilha
{
public:
	Pilha();
	~Pilha();
	
	std::queue<T> * fila, fila_aux;
	void push(T x);
	T pop();
	T top();
	bool empty();
};

template<class T>
inline Pilha<T>::Pilha()
{
	fila = new queue<T>();
}

template<class T>
inline Pilha<T>::~Pilha()
{
}

template<class T>
inline void Pilha<T>::push(T x)
{
	fila->push(x);
	for (int i = 0; i < fila->size() - 1; i++){
		fila->push(fila->front());
		fila->pop();
	}
}

template<class T>
inline T Pilha<T>::pop()
{
	if(!fila->empty())
		fila->pop();
	return T();
}

template<class T>
inline T Pilha<T>::top()
{
	if(!fila->empty())
		return fila->front();
	return T();
}

template<class T>
inline bool Pilha<T>::empty()
{
	return fila->empty();
}
