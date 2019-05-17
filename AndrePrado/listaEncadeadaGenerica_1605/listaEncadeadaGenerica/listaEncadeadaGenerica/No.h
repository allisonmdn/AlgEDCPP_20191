#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informação que será armazenada
	No<T> * proximo, *anterior; //ponteiro para o próximo nó
	
};
template <class T>
No<T>::No()
{
	proximo = nullptr;
	anterior = nullptr;
}

template <class T>
No<T>::~No()
{
}