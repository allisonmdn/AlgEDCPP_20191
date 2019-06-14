#pragma once
#include<stack>
#include<vector>
template <class T>
class fila
{
public:
	fila() {}
	~fila() {}


	void push(T no);
	void pop();
	bool empty();
	T * front();


private:
	std::stack<T> filaP, filaAux;
};

template<class T>
inline void fila<T>::push(T no)
{
	while (!filaP.empty())
	{
		filaAux.push(filaP.top());
		filaP.pop();
	}

	filaP.push(no);

	while(!filaAux.empty())
	{ 
		filaP.push(filaAux.top());
		filaAux.pop();
	}
	
}

template<class T>
inline void fila<T>::pop()
{
	filaP.pop();
}

template<class T>
inline bool fila<T>::empty()
{
	return filaP.empty();
}

template<class T>
inline T * fila<T>::front()
{
	return &filaP.top();
}
