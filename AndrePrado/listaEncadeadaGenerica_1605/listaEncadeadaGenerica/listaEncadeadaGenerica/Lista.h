#pragma once
#include "No.h"
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;
	void percorreLista(No<T> * lista);
	void insereFimLista(T * elemento); //@todo: modificar
	void inserirInicioLista(T * elemento);//@todo: modificar
	bool removeUltimoNo(No<T> * lst);
	T * removePrimeiroNo();
	void insereEm(int posicao, T * elemento); //@todo: modificar
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = não vazia
	void esvaziaLista();
	bool contemNaLista(const T elemento, No<T> * lista);
	T * obterUltimoElemento();
	T * obterPrimeiroElemento();
	T * obterElementoEm(int posicao);

protected:
	int tam;
};


template <class T>
Lista<T>::Lista()
{
	this->tam = 0;
}
template <class T>
Lista<T>::~Lista()
{
}
template <class T>
void Lista<T>::percorreLista(No<T> * lista)
{
	if (lista != nullptr) {
		lista_aux = lista;
		percorreLista(lista->proximo);
	}
}
template <class T>
void Lista<T>::insereFimLista(T * elemento)
{
	No<T> * no = new No<T>;
	no->info = elemento;
	no->anterior = this->lista;
	//no->proximo = nullptr;
	if (this->lista == nullptr) { //se é vazia
		this->lista = no;//insere o primeiro elemento
		this->tam++;
	}
	else {
		this->lista_aux = this->lista; //inicializa variavel aux
									   //enquanto não chegou no último nó da lista
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		//lista_aux aponta para o último nó da lista
		this->lista_aux->proximo = no; //atribui novo nó
		this->tam++;
	}
}
template<class T>
void Lista<T>::inserirInicioLista(T * elemento)
{
	No<T> * no = new No<T>;

	no->info = elemento;
	if (!listaVazia()) {
		no->proximo = lista;
		lista = no;
		tam++;
	}
	else {
		lista = no;
		tam++;
	}
}
template <class T>
void Lista<T>::insereEm(int posicao, T * elemento )
{
	//declarar o índice
	int i = 0;
	//No<T> * no_ant = nullptr;
	No<T> * no = new No<T>;
	no->info = elemento;
	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no->anterior = this->lista;
	if (posicao <= this->tam) {

		while (i <= posicao) {
			if (i == posicao) {
				//atualiza o nó
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) {
						//@todo insereInicioLista ou push_front
						no->proximo = this->lista;
						this->lista = no;
					}
					else {
						no->proximo = this->lista_aux;
						no->anterior = no;
					}
				}
				this->tam++;
			}
			//atualiza o nó anterior
			no->anterior = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else {
		//posicao inválida
	}
}
template <class T>
int Lista<T>::obtemTamanhoLista()
{
	return this->tam;
}
template <class T>
bool Lista<T>::listaVazia()
{
	if (this->lista == nullptr)
		return true;
	else
		return false;
}
template <class T>
void Lista<T>::esvaziaLista()
{
	if (this->lista != nullptr) {
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) {
			//primeiro passo: atualizar lista_aux para o próximo nó
			this->lista_aux = this->lista->proximo;
			//segundo passo: deletar o nó
			delete this->lista;
			//terceiro passo: atualizar a lista para o próximo nó
			this->lista = this->lista_aux;
		}
	}
}
template<class T>
bool Lista<T>::contemNaLista(const T elemento, No<T> * param_lista = this->lista)
{
	//recebe o nó
	//percorre a lista até encontrar o nó
	//pra cada nó comparar a info que contém o tipo T, ou a informação desejada

	if (param_lista != nullptr) {
		//lista_aux = lista;
		if (param_lista->info == no.info)
			return true;
		else
			return contemNaLista(no, param_lista->proximo);
	}
	return false;

}
template <class T>
bool Lista<T>::removeUltimoNo(No<T> * lst) {
	if (lst != nullptr) {
		if (lst->proximo != nullptr) {
			this->lista_aux = lst;
			lista = lst->proximo;
			percorreLista(lista);

		}
		else {
			//cheguei no último elemento
			lista_aux->proximo = nullptr; //penultimo atualiza ponteiro próximo
			delete lst; //deleta ultimo nó
			return true;
		}
	}
	return false;

}

template<class T>
T * Lista<T>::removePrimeiroNo()
{
	T * info = nullptr;
	if (!listaVazia()) {
		lista_aux = lista;
		lista = lista->proximo;
		info = lista_aux->info;
		delete lista_aux;
		tam--;
	}
	return info;
}

template<class T>
bool Lista<T>::contemNaLista(const T elemento, No<T> *  lista)//procurar pessoa na lista por nome
{
	if (lista->proximo != nullptr) {
		if (lista->info == elemento) {//se encontrar
			return true;
		}
		else {//se nao encontrar
			lista = lista->proximo;
			contemNaLista(elemento, lista);
		}
	}
	else {//se nao encontrar e chegar ao fim da lista retorna falso
		return false;
	}
}

template<class T>
T * Lista<T>::obterUltimoElemento()
{
	if (this->lista->proximo != nullptr) {

		this->lista->anterior = this->lista;

		while (this->lista->proximo != nullptr) {
			this->lista = this->lista_aux->proximo;
		}
		return this->lista->info;
	}
	else {
		return lista->info;
	}
}

template<class T>
T * Lista<T>::obterPrimeiroElemento()
{
	if (lista->anterior != nullptr) {
		this->lista->proximo = this->lista;

		while (lista->anterior != nullptr)
		{
			this->lista = this->lista->anterior;
		}
		return this->lista->info;
	}
	else {
		return lista->info;
	}
}

template<class T>
T * Lista<T>::obterElementoEm(int posicao)
{
	int aux = 0;

	if (posicao == 0) {
		return this->lista->info;
	}

	else if (posicao < tam) {
		this->lista->anterior = this->lista;
		this->lista = this->lista->proximo;

				while (lista->proximo != nullptr)
				{
					if (aux < posicao) {
						this->lista = this->lista->proximo;
					}
					aux++;
				}
				return this->lista->info;
	}

	else {
		return std::string("Posicao maior que a lista!\n");
	}
}