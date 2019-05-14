#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informação que será armazenada
	No * proximo; //ponteiro para o próximo nó
	
};
template <class T>
No<T>::No()
{
}

template <class T>
No<T>::~No()
{
}