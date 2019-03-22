

#include "Personagem.h"
#include "Mago.h"
#include "Guerreiro.h"

class Jogo
{

public:

	Jogo();
	~Jogo();
	void escolhePersonagem(int per);
	 Personagem * obterPersonagem();
	 

private:

	Personagem * personagem = nullptr;

	void definePersonagem(Personagem * p);
};

