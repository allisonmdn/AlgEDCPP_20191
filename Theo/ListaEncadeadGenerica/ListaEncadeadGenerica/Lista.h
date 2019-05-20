#pragma once
#include "No.h"
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux, *fim_lista;
	void percorreLista(No<T> * lista);
	void insereFimLista(T * elemento); //@todo: modificar
	void inserirInicioLista(T * elemento);//@todo: modificar
	bool removeUltimoNo(No<T> * lst);
	T * removePrimeiroNo();
	void insereEm(int posicao, T * elemento); //@todo: modificar
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = não vazia
	void esvaziaLista();
	bool contemNaLista(const T elemento, No<T> * param_lista);
	void percorreFimLista(No<T> * fim_Lista);
	T* obterUltimoElemento();
	T* obterPrimeiroElemento();
	T* obterElementoEm(int posicao);
	T* mostrarElementosLista();
	//bool removerNo(const No<T> no);
	//int obtemPosicao(No<T> no);

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
	No<T> *no = new No<T>;
	no->info = elemento; //O elemento serve para indiciar o conteúdo do no, mas o que realmente é inserido na lista é o no(com o conteudo?);
	no->proximo = nullptr;

	if (this->lista == nullptr) { //se é vazia
		this->lista = no;//insere o primeiro elemento
		this->fim_lista = lista;
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
		no->anterior = lista_aux;
		this->fim_lista = lista_aux->proximo;
		this->tam++;
	}
}
template<class T>
void Lista<T>::inserirInicioLista(T * elemento)
{	
	No<T> *no = new No<T>;
	no->info = elemento;

	if (!listaVazia()) {
		no->proximo = lista;
		lista = no;
		lista->anterior = no;
		tam++;
	}
	else { //->Se a lista tiver vazia ele já adiciona na primeira posicao
		lista = no;
		tam++;
	}
}
template <class T>
void Lista<T>::insereEm(int posicao, T * elemento)
{
	No<T> *no = new No<T>;
	no->info = elemento;

	//declarar o índice
	int i = 0;
	No<T> * no_ant = nullptr;

	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no_ant = this->lista;
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
						lista->anterior = no;
					}
					else {
						no->proximo = this->lista_aux;
						no_ant->proximo = no;
						lista_aux->anterior = no;
						no->anterior = no_ant;
					}
				}
				this->tam++;
			}
			//atualiza o nó anterior
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			//Fim da lista será o lista_aux?
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
	No<T> *no = new No<T>;
	no->info = elemento;

	//recebe o nó
	//percorre a lista até encontrar o nó
	//pra cada nó comparar a info que contém o tipo T, ou a informação desejada

	if (param_lista != nullptr) {
		//lista_aux = lista;
		if (param_lista->info == no.info)
			return true;
		else
			return contemNaLista(elemento, param_lista->proximo);
	}
	return false;

}

template<class T>
inline void Lista<T>::percorreFimLista(No<T>* fim_Lista)
{
	if (fim_Lista != nullptr) {
		lista_aux = fim_Lista;
		percorreLista(fim_Lista->anterior);
	}
}

template<class T>
inline T * Lista<T>::obterUltimoElemento()
{
	return fim_lista->info;
}

template<class T>
inline T * Lista<T>::obterPrimeiroElemento()
{
	return lista->info;
}

template<class T>
inline T * Lista<T>::obterElementoEm(int posicao)
{
	return NULL;
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