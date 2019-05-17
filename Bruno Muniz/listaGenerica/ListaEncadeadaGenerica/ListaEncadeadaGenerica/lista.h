#pragma once
#include "No.h"
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;
	No<T> * inicio_lista, fim_lista;

 	void percorreLista(No<T> * lista);
	void insereFimLista(T * elemento); //@todo: modificar
	void inserirInicioLista(T * elemento);//@todo: modificar
	bool removeUltimoNo(No<T> * lst);
	T * removePrimeiroNo();
	void insereEm(int posicao, No<T> * no); //@todo: modificar
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = não vazia
	void esvaziaLista();
	bool contemNaLista(const elemento, no, No<T> * param_lista);
	//bool removerNo(const No<T> no);
	//int obtemPosicao(No<T> no);

protected:
	int tam;
};

