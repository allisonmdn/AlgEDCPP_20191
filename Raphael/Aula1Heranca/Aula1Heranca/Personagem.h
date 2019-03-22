#pragma once
#include <string>
class Personagem
{
public:
	Personagem();
	~Personagem();
	std::string mover();
	virtual std::string quemSoul();
};

