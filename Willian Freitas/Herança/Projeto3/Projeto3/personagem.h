#pragma once
#include <string>
using namespace std;
class personagem
{

protected:
	string nome;
	string obtemLogin();
public:
	personagem();
	~personagem();

	string mover();
	virtual string quemSoul();
	string getNome();
private:
	string login;
};

