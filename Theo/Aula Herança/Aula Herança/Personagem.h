#pragma once
#include<string>

class Personagem
{
public:
	Personagem();
	~Personagem();
	std::string mover();
	virtual std::string quemSou();
	std::string getNome();

private:

	std::string login;

protected:
	std::string nome;
	std::string obtemLogin();
};

