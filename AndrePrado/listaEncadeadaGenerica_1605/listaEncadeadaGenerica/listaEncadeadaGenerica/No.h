#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informa��o que ser� armazenada
	No<T> * proximo, *anterior; //ponteiro para o pr�ximo n�
	
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