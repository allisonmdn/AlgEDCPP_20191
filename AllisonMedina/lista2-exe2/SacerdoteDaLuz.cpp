#include "SacerdoteDaLuz.h"



SacerdoteDaLuz::SacerdoteDaLuz()
{
}


SacerdoteDaLuz::~SacerdoteDaLuz()
{
}

void SacerdoteDaLuz::Atacar()
{
	std::cout << "CAJADADA DA MEMÓRIA!\n"; //Quando vem aquela luz do que foi esquecido, que maravilha.
}

void SacerdoteDaLuz::Defender()
{
	std::cout << "PROTEÇÃO DO ESCUDO ABENÇOADO!\n";
}

void SacerdoteDaLuz::AtaqueMagico()
{
	std::cout << "ATAQUE DE LUZ!\n";
}

void SacerdoteDaLuz::executar()
{
	std::cout << "Classe: " << tipoClasse();
	this->Atributos();
	std::cout << "[z]Ataque Físico " << "[Z]Ataque Mágico " << " [c]Defender " << " [d]Caminhar " << " [1]Benção " << " [2]Aumentar Agilidade " << " [3]Curar\n" << " [4]Trazer Divindade" << " [5]Abençoar Dia\n\n";

	std::cout << "PARA VOLTAR, PRESSIONE [s]\n\n\n ---AÇÕES---\n\n\n";

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

	//Fudô_Myôô, Sakyamuni_Nyorai, Monju_Bosatsu, Fugen_Bosatsu, Jizô_Bosatsu, Miroku_Bosatsu, Yakushi_Nyorai, Kannon_Bosatsu, Seishi_Bosatsu. São 13 ao total, mas adicionei apenas 9.
	std::cout << "SUA DIVINDADE É: ";
	switch (op)
	{	
	case Fudo: std::cout << "Fudô Myôô\n\n";
		std::cout << "Acala Vidyârâja é uma divindade da classe Vidyârâjas (Myôôs) e é uma divindade com muita ira.\n É retratado segurando uma espada na mão direita e uma corda enrolada na mão esquerda.\n"
			<< "Com sua espada da sabedoria, Acala corta através de mentes iludidas e ignorantes e com a corda ele retém aqueles que são governados por suas paixões e emoções violentas. \nEle os orienta ao correto caminho do auto-controle.\n";

		break;
	case Sakyamuni: std::cout << "Sakyamuni Nyorai\n\n";
		std::cout << "Sua mão direita levantada representa que está nos chamando para chegar até ele em nossa busca por salvação.\n Sua mão esquerda descansa com palma aberta sobre o colo.\n"
			<< "Segurando o polegar com os quatro dedos, esta postura representa que \nBuda está apoiando e suportando firmemente àqueles que vieram a ele em busca de proteção.\n";

		break;
	case Monju: std::cout << "Monju Bosatsu\n\n";
		std::cout << "Bodhisattva do Lindo Esplendor Manjusri Bodhisattva (Monju) segura em sua mão esquerda uma sutra"
			<< " \npela qual ele distribui sabedoria para as pessoas e em sua mão direita segura uma espada para dispersar a ilusão.\n";

		break;
	case Fugen: std::cout << "Fugen Bosatsu\n\n";
		std::cout << "Bodhisattva da Beleza Universal. Em sua mão esquerda, Samantabhadra segura uma flor de lótus.\n O lótus representa a natureza básica da humanidade sob todas as aparências que é pura e imaculada.\n" 
			<< " Às vezes é representado montado em um elefante, um dos maiores animais do mundo.\n";

		break;
	case Jizo: std::cout << "Jizô_Bosatsu\n\n";
		std::cout << "O Bodhisattva que supre a Terra. Ele aparece gentil com a cabeça raspada\n e é descrito como um discípulo Sravaka, isto é, um monge que deixou seu lar.\n"
			<< " Na sua mão direita, Jizô segura uma vara shakujô com seis anéis e ao agitá-los ele nos desperta dos sonhos de ilusão.\n";

		break;
	case Miroku: std::cout << "Miroku Bosatsu\n\n";
		std::cout << "O Bodhisattva Benevolente. Há muitas formas ou imagens do Maitreya, ainda que em muitas destas imagens de Maitreya\n ele se apresenta segurando um stupa, na sua coroa.\n" 
			<< "Ela contém uma sarira ou relíquia verdadeira de Buda Sakyamuni.\n";

		break;
	case Yakushi: std::cout << "Yakushi Nyorai\n\n";
		std::cout << "Buda Mestre da Medicina. Em sua mão esquerda ele segura um recipiente de medicamentos enquanto\n sua mão direita forma o mudra que simboliza a garantia do atendimento aos pedidos.\n"
			<< "Isso representa seu mérito de ser capaz de atender aos pedidos das pessoas.\n";

		break;
	case Kannon: std::cout << "Kannon Bosatsu\n\n";
		std::cout << "Bodhisattva da Compaixão. Seu corpo é dourado e ele está sentado sobre chamas. Ela usa vestes Bodhisattva com uma roupagem vermelha por baixo.\n "
			<< "Sua mão direita está na altura do peito e segura uma lótus aberta, que representa o Bodhichitta. \nSua mão esquerda está também ao nível do peito e faz o mudra do destemor.\n";
		break;
	case Seishi: std::cout << "Seishi Bosatsu\n\n";
		std::cout << "Bodhisattva que Procede com Vigor. Ele segura uma flor de lótus na mão esquerda\n e sua mão direita representa energia vigorosa que pode fazer uma flor desabrochar.\n "
			<< "Assim também expressa a postura em que Buda utiliza este Bodhisattva\n para levar as pessoas para a verdadeira salvação neste mundo, podendo assim despertar a natureza e a sabedoria de Buda nas pessoas.\n";

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
	case Magnifico:std::cout << "MAGNÍFICO!\n";
		break;
	case RepletodeSorte:std::cout << "REPELTO DE SORTE!\n";
		break;
	}
}
