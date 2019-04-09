#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	ifstream arqConfig("mapas/mapa_de_assets.txt");
	int qtd, animacoes, frames, ID, pontos, tamanho;
	string token, nome, path;

	resetar();

	if (arqConfig.is_open())
	{
		while (!arqConfig.eof())
		{
			arqConfig >> token;
			if (token == "SONS")
			{
				arqConfig >> qtd;

				for (int i = 0; i < qtd; i++)
				{
					arqConfig >> nome >> path;
					if (!gRecursos.carregouAudio(nome))
						gRecursos.carregarAudio(nome, path);
				}
			}
			else if (token == "MUSICAS")
			{
				arqConfig >> qtd;

				for (int i = 0; i < qtd; i++)
				{
					arqConfig >> nome >> path;
					if (!gRecursos.carregouMusica(nome))
						gRecursos.carregarMusica(nome, path);
				}
			}
			else if (token == "SPRITE")
			{
				arqConfig >> qtd;

				for (int i = 0; i < qtd; i++)
				{
					arqConfig >> ID >> nome >> path >> animacoes >> frames;

					if (!gRecursos.carregouSpriteSheet(nome))
						gRecursos.carregarSpriteSheet(nome, path, animacoes, frames);
				}
			}
	else if (token == "FONTES")
	{
		arqConfig >> qtd;
		for (int i = 0; i < qtd; i++)
		{
			arqConfig >> nome >> path >> tamanho;
			if (!gRecursos.carregouFonte(nome))
				gRecursos.carregarFonte(nome, path, tamanho);
		}
	}

	else
	{
		cout << "erro";
	}
	}
	arqConfig.close();
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		//	Seu código vem aqui!
		//	...

		uniTerminarFrame();
	}
}