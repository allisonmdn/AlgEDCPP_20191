#pragma once
#include <string>
using namespace std;
	class Personagem{
protected:
	string nome;
	string obtemLogin();

private:
	string login;

public:
	Personagem();
	~Personagem();

	string mover();
	virtual string quemSou();
	string obtemNome();
	string nomes;
};

