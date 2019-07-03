#pragma once
class Nodo
{
public:
	Nodo();
	~Nodo();
	Nodo(char elem);

	void setProximo(Nodo * prox);
	void setElemento(char elem);

	Nodo* getProximo();
	char getElemento();

private:
	Nodo* proximo;
	char elemento;
};

