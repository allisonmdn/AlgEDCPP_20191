#pragma once
template <class T>
class No
{
public:
	No();
	~No();
	T * info; //informação que será armazenada
	No<T> * proximo, * anterior; //ponteiro para o próximo nó e para o anterior

};
template <class T>
No<T>::No(){
	this->proximo = nullptr;
	this->anterior = nullptr;
}

template <class T>
No<T>::~No(){
}