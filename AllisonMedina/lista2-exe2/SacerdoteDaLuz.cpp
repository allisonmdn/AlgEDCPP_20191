#include "SacerdoteDaLuz.h"



SacerdoteDaLuz::SacerdoteDaLuz()
{
}


SacerdoteDaLuz::~SacerdoteDaLuz()
{
}

void SacerdoteDaLuz::Atacar()
{
	std::cout << "CAJADADA DA MEM�RIA!\n"; //Quando vem aquela luz do que foi esquecido, que maravilha.
}

void SacerdoteDaLuz::Defender()
{
	std::cout << "PROTE��O DO ESCUDO ABEN�OADO!\n";
}

void SacerdoteDaLuz::AtaqueMagico()
{
	std::cout << "ATAQUE DE LUZ!\n";
}

void SacerdoteDaLuz::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Ataque F�sico " << "[Z]Ataque M�gico " << " [c]Defender " << " [d]Caminhar " << " [1]Ben��o " << " [2]Aumentar Agilidade " << " [3]Curar\n" << " [4]Trazer Divindade" << " [5]Aben�oar Dia\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---A��ES---\n\n\n";

	if (_getch() == 'z')
	{
		Atacar();
	}
	else if (_getch() == 'Z')
	{
		AtaqueMagico();
	}
	else if (_getch() == 'c')
	{
		Defender();
	}
	else if (_getch() == 'd')
	{
		Caminhar();
	}
	else if (_getch() == '1')
	{
		Clerigo::Bencao();
	}
	else if (_getch() == '2')
	{
		Clerigo::Agilidade();
	}
	else if (_getch() == '3')
	{
		Clerigo::Curar();
	}
	else if (_getch() == '4')
	{
		this->TrazerDivindade();
	}
	else if (_getch() == '5')
	{
		this->AbencoarDia();
	}
	std::cout << "\n";
}

std::string SacerdoteDaLuz::tipoClasse()
{
	this->c_sacerluz = "Sacerdote da Luz\n";

	return c_sacerluz;
}

void SacerdoteDaLuz::TrazerDivindade()
{
	
	srand(time(NULL));

	op = rand() % 9;

	//Fud�_My��, Sakyamuni_Nyorai, Monju_Bosatsu, Fugen_Bosatsu, Jiz�_Bosatsu, Miroku_Bosatsu, Yakushi_Nyorai, Kannon_Bosatsu, Seishi_Bosatsu. S�o 13 ao total, mas adicionei apenas 9.
	std::cout << "SUA DIVINDADE �: ";
	switch (op)
	{	
	case Fudo: std::cout << "Fud� My��\n\n";
		std::cout << "Acala Vidy�r�ja � uma divindade da classe Vidy�r�jas (My��s) e � uma divindade com muita ira.\n � retratado segurando uma espada na m�o direita e uma corda enrolada na m�o esquerda.\n"
			<< "Com sua espada da sabedoria, Acala corta atrav�s de mentes iludidas e ignorantes e com a corda ele ret�m aqueles que s�o governados por suas paix�es e emo��es violentas. \nEle os orienta ao correto caminho do auto-controle.\n";

		break;
	case Sakyamuni: std::cout << "Sakyamuni Nyorai\n\n";
		std::cout << "Sua m�o direita levantada representa que est� nos chamando para chegar at� ele em nossa busca por salva��o.\n Sua m�o esquerda descansa com palma aberta sobre o colo.\n"
			<< "Segurando o polegar com os quatro dedos, esta postura representa que \nBuda est� apoiando e suportando firmemente �queles que vieram a ele em busca de prote��o.\n";

		break;
	case Monju: std::cout << "Monju Bosatsu\n\n";
		std::cout << "Bodhisattva do Lindo Esplendor Manjusri Bodhisattva (Monju) segura em sua m�o esquerda uma sutra"
			<< " \npela qual ele distribui sabedoria para as pessoas e em sua m�o direita segura uma espada para dispersar a ilus�o.\n";

		break;
	case Fugen: std::cout << "Fugen Bosatsu\n\n";
		std::cout << "Bodhisattva da Beleza Universal. Em sua m�o esquerda, Samantabhadra segura uma flor de l�tus.\n O l�tus representa a natureza b�sica da humanidade sob todas as apar�ncias que � pura e imaculada.\n" 
			<< " �s vezes � representado montado em um elefante, um dos maiores animais do mundo.\n";

		break;
	case Jizo: std::cout << "Jiz�_Bosatsu\n\n";
		std::cout << "O Bodhisattva que supre a Terra. Ele aparece gentil com a cabe�a raspada\n e � descrito como um disc�pulo Sravaka, isto �, um monge que deixou seu lar.\n"
			<< " Na sua m�o direita, Jiz� segura uma vara shakuj� com seis an�is e ao agit�-los ele nos desperta dos sonhos de ilus�o.\n";

		break;
	case Miroku: std::cout << "Miroku Bosatsu\n\n";
		std::cout << "O Bodhisattva Benevolente. H� muitas formas ou imagens do Maitreya, ainda que em muitas destas imagens de Maitreya\n ele se apresenta segurando um stupa, na sua coroa.\n" 
			<< "Ela cont�m uma sarira ou rel�quia verdadeira de Buda Sakyamuni.\n";

		break;
	case Yakushi: std::cout << "Yakushi Nyorai\n\n";
		std::cout << "Buda Mestre da Medicina. Em sua m�o esquerda ele segura um recipiente de medicamentos enquanto\n sua m�o direita forma o mudra que simboliza a garantia do atendimento aos pedidos.\n"
			<< "Isso representa seu m�rito de ser capaz de atender aos pedidos das pessoas.\n";

		break;
	case Kannon: std::cout << "Kannon Bosatsu\n\n";
		std::cout << "Bodhisattva da Compaix�o. Seu corpo � dourado e ele est� sentado sobre chamas. Ela usa vestes Bodhisattva com uma roupagem vermelha por baixo.\n "
			<< "Sua m�o direita est� na altura do peito e segura uma l�tus aberta, que representa o Bodhichitta. \nSua m�o esquerda est� tamb�m ao n�vel do peito e faz o mudra do destemor.\n";
		break;
	case Seishi: std::cout << "Seishi Bosatsu\n\n";
		std::cout << "Bodhisattva que Procede com Vigor. Ele segura uma flor de l�tus na m�o esquerda\n e sua m�o direita representa energia vigorosa que pode fazer uma flor desabrochar.\n "
			<< "Assim tamb�m expressa a postura em que Buda utiliza este Bodhisattva\n para levar as pessoas para a verdadeira salva��o neste mundo, podendo assim despertar a natureza e a sabedoria de Buda nas pessoas.\n";

		break;	
	}

}

void SacerdoteDaLuz::AbencoarDia()
{
	srand(time(NULL));

	op_ab = rand() % 4;

	std::cout << "TENHA UM DIA: ";

	//Felicidade, Amoroso, Magnifico, RepletodeSorte.
	switch (op_ab)
	{
	case Felicidade:std::cout << "FELIZ!\n";
		break;
	case Amoroso:std::cout << "COM MUITO AMOR!\n";
		break;
	case Magnifico:std::cout << "MAGN�FICO!\n";
		break;
	case RepletodeSorte:std::cout << "REPELTO DE SORTE!\n";
		break;
	}
}
