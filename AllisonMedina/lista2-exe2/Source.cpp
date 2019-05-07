#include <iostream>
#include "SacerdoteDasTrevas.h"
#include "SacerdoteDaLuz.h"
#include "Ladino.h"
#include "Barbaro.h"
#include "Mago.h"
#include "Ranger.h"
#include "Bardo.h"


void main()
{
	setlocale(LC_ALL, "Portuguese");
		
	char op, op2;

	Guerreiro * g = new Guerreiro;
	Ladino * la = new Ladino;
	Mago * m = new Mago;
	Clerigo * cl = new Clerigo;
	SacerdoteDasTrevas * s_trevas = new SacerdoteDasTrevas;
	SacerdoteDaLuz * s_luz = new SacerdoteDaLuz;
	Barbaro * barbaro = new Barbaro;
	Ranger * ranger = new Ranger;
	Bardo * bardo = new Bardo;
	
	do {
		do {
			std::cout << "Escolha uma classe e aperte [ENTER]:\n"
				<< " [1] Guerreiro\n"
				<< " [2] Ladino\n"
				<< " [3] Mago\n"
				<< " [4] Clérigo\n"
				<< " [5] Ranger\n"
				<< " [6] Bardo\n";

			std::cin >> op;
			switch (op)
			{
			case '1': //Subclasse de guerreiro.
				do {

					std::cout << "Escolha uma classe e aperte [ENTER]:\n"
						<< " [1] Guerreiro\n"
						<< " [2] Bárbaro\n";
					
					std::cin >> op2;

					switch (op2)
					{
					case '1':
						while (_getch() != 's')
						{
							g->executar();
						}
						break;

					case '2':
						while (_getch() != 's')
						{
							barbaro->executar();
						}
						break;
					
					default: op2 = 0;
						std::cout << "Classe indefinida\n";
						break;
					}
				} while (op2 == 0); //while Subclasse Guerreiro.  

				break;
			case '2': //Ladino
				while (_getch() != 's')
				{
					la->executar();	   
				}
				break;
			case '3':
				while (_getch() != 's')
				{
					m->executar();
				}
				break;
				
			case '4':	//Subclasses de clérigo.
				do {

					std::cout << "Escolha uma classe e aperte [ENTER]:\n"
						<< " [1] Clérigo\n"
						<< " [2] Sacerdote das Trevas\n"
						<< " [3] Sacerdote da Luz\n";

					std::cin >> op2;

					switch (op2)
					{
					case '1': 
						while (_getch() != 's')
						{
							cl->executar();
						}
						break;

					case '2':
						while (_getch() != 's')
						{
							s_trevas->executar();
						}
						break;
					case '3':
						while (_getch() != 's')
						{
							s_luz->executar();
						}
						break;

					default: op2 = 0;
						std::cout << "Classe indefinida\n";
						break;
					}
				} while (op2 == 0); //while Subclasse Clérigo.
				
				break;

			case '5':  //Ranger
				while (_getch() != 's')
				{
					ranger->executar();
				}
				break;

			case '6':  //Bardo
				while (_getch() != 's')
				{
					bardo->executar();
				}
				break;

			default: op = 0;
				std::cout << "Classe indefinida\n";
				break;
			}
		} while (op == 0); //Opção inválida, volta o while.

	} while (_getch() == 's'); //Em caso de desejo para escolher outra classe.
   
	
}