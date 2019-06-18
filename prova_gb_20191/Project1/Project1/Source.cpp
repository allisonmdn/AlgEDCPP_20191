#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

int main() {

	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;
	Lista<Pessoa> * usuarios = new Lista<Pessoa>;


	// Definição de pessoas
	Pessoa * pessoa1;
	pessoa1 = new Pessoa();
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	Pessoa * pessoa2 = new Pessoa();
	pessoa2->s_nome = "Raphael";
	pessoa2->i_idade = 0;

	Pessoa * pessoa3 = new Pessoa();
	pessoa3->s_nome = "Bozo";
	pessoa3->i_idade = 0;

	/*************************
	 *
	 *	TESTE LISTA
	 *
	 ************************/
	//Insere Pessoas na Lista
	listaPessoas->insereFimLista(pessoa1);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	listaPessoas->insereInicioLista(deux);
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	listaPessoas->insereFimLista(pessoa2);
	
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	listaPessoas->insereFimLista(pessoa3);
	//Mostra Pessoas na lista
	/*std::cout << "obterPrimeiroElemento = " << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	
	std::cout << "obterElementoEm(0) = " << listaPessoas->obterElementoEm(0)->s_nome << std::endl;
	std::cout << "obterElementoEm(1) = " << listaPessoas->obterElementoEm(1)->s_nome << std::endl;
	std::cout << "obterElementoEm(2) = " << listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	
	listaPessoas->insereEm(1, pessoa3);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	std::cout << "obterElementoEm(2) = "<< listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;

	listaPessoas->removePrimeiroNo();
	std::cout << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;

	listaPessoas->removeUltimoNo();
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	*/

	/*************************
	 *
	 *	TESTE CONTEM NA LISTA
	 *
	 ************************/
	std::cout << "TESTES CONTEM NA LISTA \n";
	//TESTE CONTEM NA LISTA - RESULTADO ESPERADO TRUE
	std::cout << "Passou no teste?" << std::endl;
	if (listaPessoas->contemNaLista(pessoa3)) std::cout << "sim \n"; else std::cout << "não \n";
	//TESTE CONTEM NA LISTA - ELEMENTO NULLPTR RESULTADO ESPERADO FALSE
	std::cout << "Passou no teste?" << std::endl;
	if (!listaPessoas->contemNaLista(nullptr)) std::cout << "sim \n"; else std::cout << "não \n";
	//TESTE CONTEM NA LISTA - LISTA VAZIA RESULTADO ESPERADO FALSE
	std::cout << "Passou no teste?" << std::endl;
	if (!usuarios->contemNaLista(pessoa3)) std::cout << "sim \n"; else std::cout << "não \n";

	/*************************
	 *
	 *	INSERE ELEMENTOS NA LISTA USUARIOS
	 *
	 ************************/
	usuarios->insereFimLista(pessoa1);
	usuarios->insereFimLista(deux);
	usuarios->insereFimLista(pessoa2);
	usuarios->insereFimLista(pessoa3);

	/*************************
	 *
	 *	TESTE COMPARA LISTAS
	 *
	 ************************/
	std::cout << "TESTE COMPARA LISTAS \n";
	//TESTA PASSANDO NULLPTR RESULTADO ESPERADO FALSE
	std::cout << "Passou no teste?" << std::endl;
	if (!listaPessoas->comparaLista(nullptr)) std::cout << "sim \n"; else std::cout << "não \n";
		
	//TESTA PASSANDO LISTA IGUAL RESULTADO ESPERADO TRUE
	std::cout << "Passou no teste?" << std::endl;
	if (listaPessoas->comparaLista(usuarios)) std::cout << "sim \n"; else std::cout << "não \n";
	
	//TESTA PASSANDO LISTA VAZIA RESULTADO ESPERADO FALSE
	usuarios->esvaziaLista();
	std::cout << "Passou no teste?" << std::endl;
	if (!listaPessoas->comparaLista(usuarios)) std::cout << "sim \n"; else std::cout << "não \n";
	



	listaPessoas->esvaziaLista();
	//std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	





	system("pause");
	return 0;
}