#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informa��o que ser� armazenada
	No<T> * proximo; //ponteiro para o pr�ximo n�
	No<T> * anterior;
	
};
template <class T>
No<T>::No()
{
}

template <class T>
No<T>::~No()
{
}