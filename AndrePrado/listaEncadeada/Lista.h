#pragma once
#include "No.h"

class Lista
{
public:
	Lista();
	~Lista();
	No * lista, *lista_aux;
	void percorreLista(No * lista);
	void insereFimLista(No * no);
	void inserirInicioLista(No * no);
	bool removeUltimoNo(No * lst);
	bool removePrimeiroNo();
	void insereEm(int posicao, No * no);
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = não vazia
	void esvaziaLista();
	bool contemNaLista(const No no, No * param_lista);
	//bool removerNo(const No no);
	//int obtemPosicao(No no);

protected:
	int tam;
};


