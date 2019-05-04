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
	carregadorDeAssets();
	
}

void Jogo::finalizar()
{
	

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();


		uniTerminarFrame();
	}
}

void Jogo::carregadorDeAssets()
{
	ifstream arqMapa_assets;
	arqMapa_assets.open("../mapa_assets.txt");

	if (arqMapa_assets.is_open())
	{
		gDebug.depurar("abriu", 1);
		while (!arqMapa_assets.eof())
		{
			arqMapa_assets >> token;
			gDebug.depurar("token", token);
			if (token == "SPRITE")
			{
				arqMapa_assets >> qtdAssets;
				
				for (int i = 0; i  < qtdAssets; i++)
				{
					gDebug.depurar("token", qtdAssets);
					arqMapa_assets >> nome >> path >> animacoes >> frames;
					gRecursos.carregarSpriteSheet(nome, path, animacoes, frames);
				}
			}
			else if(token == "MUSICA")
			{
				arqMapa_assets >> qtdAssets;
				for (int i = 0; i < qtdAssets; i++)
				{
					arqMapa_assets >> nome >> path;
					gRecursos.carregarMusica(nome, path);
				}
			}
			else if (token == "AUDIO")
			{
				arqMapa_assets >> qtdAssets;
				for (int i = 0; i < qtdAssets; i++)
				{
					arqMapa_assets >> nome >> path;
					gRecursos.carregarAudio(nome, path);
				}
			}
			else if (token == "FONTE")
			{
				arqMapa_assets >> qtdAssets;
				for (int i = 0; i < qtdAssets; i++)
				{
					arqMapa_assets >> nome >> path >> tamanhoFonte;
					gRecursos.carregarFonte(nome, path, tamanhoFonte);
				}
			}
			else if (token == "TEXTURA")
			{
				arqMapa_assets >> qtdAssets;
				for (int i = 0; i < qtdAssets; i++)
				{
					arqMapa_assets >> nome >> path;
					gRecursos.carregarTextura(nome, path);
				}
			}

		}
	}
	else
	{
		gDebug.depurar("Erro", "Erro");
	}
}
