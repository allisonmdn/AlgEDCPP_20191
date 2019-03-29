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

	//	O resto da inicializa��o vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
	//	...
	gRecursos.descarregarTudo();
	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		if (gTeclado.segurando[TECLA_DIR])
			personagem.moverDir();
		else if (gTeclado.segurando[TECLA_ESQ])
			personagem.moverEsq();
		else if (gTeclado.segurando[TECLA_CIMA])
			personagem.moverCima();
		else if (gTeclado.segurando[TECLA_BAIXO])
			personagem.moverBaixo();



		//Defender
		else if (gTeclado.segurando[TECLA_A])
			personagem.defender();
		//Atacar
		else if (gTeclado.segurando[TECLA_B])
			Personagem.atacar();
		//Estrangular
		else if (gTeclado.segurando[TECLA_C])
			personagem.estrangular();
		//rasteira
		else if (gTeclado.segurando[TECLA_D])
		//socar
		else if (gTeclado.segurando[TECLA_E])
		//Arremessar
		else if (gTeclado.segurando[TECLA_F])

		//Gritar
		else if (gTeclado.segurando[TECLA_G])
		//Correr
		else if (gTeclado.segurando[TECLA_H])
		//F�ria
		else if (gTeclado.segurando[TECLA_I])
		//RepararArmas
		else if (gTeclado.segurando[TECLA_J])
		//Rolar
		else if (gTeclado.segurando[TECLA_K])



		uniTerminarFrame();
	}
}