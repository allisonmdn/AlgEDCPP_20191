#pragma once
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

private:
	void realocar();
	int *vetor;
	int tamanho_vetor = 5;
	int ocupado;
};

