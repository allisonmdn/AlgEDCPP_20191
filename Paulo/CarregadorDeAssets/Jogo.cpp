#include "Jogo.h"
#include <Global.h>
Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	ifstream mapa_de_assets;
	mapa_de_assets.open("assets/assets.txt", ios::in);
	
	if (mapa_de_assets.is_open()) {
		gDebug.erro("abriu");
	}
	else {
		gDebug.erro("erro");
	}

	string tipo;
	string id;
	string caminho;
	string anim;
	string frames;
	std::string::size_type sz;
	
	
	while (!mapa_de_assets.eof()) {
		mapa_de_assets >> tipo;
		mapa_de_assets >> id;
		mapa_de_assets >> caminho;
		mapa_de_assets >> anim;
		mapa_de_assets >> frames;

		if (tipo == "spritesheet") {
			gRecursos.carregarSpriteSheet(id, caminho, std::stoi(anim, &sz), std::stoi(frames, &sz), QUALIDADE_ESCALA_BAIXA);
			//gDebug.depurar(id + " " + caminho + " " + anim + " " + frames);
		}

	}
	mapa_de_assets.close();

	//	O resto da inicialização vem aqui!
	//	...
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