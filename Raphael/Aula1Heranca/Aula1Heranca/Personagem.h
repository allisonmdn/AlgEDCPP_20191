#pragma once
#include <string>
class Personagem
{
protected:
	std::string nome;
	std::string obtemLogin();
private:
	std::string login;
public:
	Personagem();
	~Personagem();
	std::string mover();
	virtual std::string quemSoul();
	std::string obtemNome();
	std::string nomes;
};

