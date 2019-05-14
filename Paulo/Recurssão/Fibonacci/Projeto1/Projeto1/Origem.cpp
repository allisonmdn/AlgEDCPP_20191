//PALINDROMO
#include <iostream>
#include <string>
using namespace std;
bool palindromo(string palavra, int tam, int indice) {
	bool result = true;
	if (tam > 0) {
		if ((palavra[indice] == palavra[(tam - 1)]))
			result = palindromo(palavra, --tam, ++indice);
		else
			result = false;
	}
	return result;
}
void main() {

	string palavra;
	cin >> palavra;

	palindromo(palavra, palavra.length(), 0) ? std::cout << "e palindromo" << endl :
		std::cout << "não e palindromo" << std::endl;
	system("pause");
}


//RECURSAO FATORIAL
#include <iostream>
using namespace std;
int fat(int num) {
	if (num == 1)
		return 1;
	else
		return num*fat(num - 1);
}
void main() {
	int n = 0;
	cout << "Informe um inteiro positivo" << endl;
	cin >> n;
	cout << fat(n);
	system("pause");
}


//RECURSAO POTENCIA
#include<iostream>
#include<string>
using namespace std;
int potencia(int base, int exp) {
	if (exp == 0)
		return 1;
	return base * potencia(base, exp - 1);
}
void main() {
	std::cout << potencia(2, 3);
	system("pause");
}


//ARQUIVO
#include <iostream>
#include <fstream>
#include <string>
void main() {
	std::ofstream arquivo("teste.txt", std::ios::out);
	if (!arquivo.is_open())
		std::cout << "Não Abriu" << std::endl;
	arquivo << 10 << "\n" << "mapa1\n" << 2 << " " << 2 << "\n";
	arquivo << "l1c1" << " " << "l1c2" << "\n";
	arquivo << "l2c1" << " " << "l2c2" << "\n";
	arquivo.close();

	std::ifstream iarquivo;
	iarquivo.open("teste.txt");
	if (!iarquivo) {
		std::cout << "Não Abriu" << std::endl;
	}
	int num_mapas;
	std::string nome_mapa;
	iarquivo >> num_mapas;
	std::cout << "Numero de Mapas = " << num_mapas << std::endl;
	iarquivo >> nome_mapa;
	std::cout << "Nome do Mapa = " << nome_mapa << std::endl;
	int num_linhas, num_colunas;
	iarquivo >> num_linhas >> num_colunas;
	std::cout << num_linhas << " " << num_colunas << std::endl;
	std::string linha_col1, linha_col2;
	iarquivo >> linha_col1 >> linha_col2;
	std::cout << linha_col1 << " " << linha_col2 << std::endl;
	iarquivo.close();
	system("pause");
}


//VETOR DINAMICO
#include <iostream>
using namespace std;
int main() {

	// Exercício 1
	int *inteiros1 = (int *)calloc(3, sizeof(int));
	cout << "Adicione 3 valores: ";
	for (int i = 0; i < 3; i++)
		cin >> inteiros1[i];
	for (int i = 0; i < 3; i++)
		cout << inteiros1[i];

	//Exercício 2
	int *inteiros;
	inteiros = new int[3];
	cout << "Adicione 3 valores: ";
	for (int i = 0; i < 3; i++)
		cin >> inteiros[i];
	for (int i = 0; i < 3; i++)
		cout << inteiros[i];

	//Exercício 3
	int tam;
	int *inteiros2 = (int *)calloc(3, sizeof(int));
	cout << "Adicione 3 valores: ";
	for (int i = 0; i < 3; i++)
		cin >> inteiros2[i];
	for (int i = 0; i < 3; i++)
		cout << inteiros2[i];
	cout << "Qual o novo valor total do vetor: ";
	cin >> tam;
	inteiros2 = (int*)realloc(inteiros2, tam * sizeof(int));
	for (int i = 3; i < tam; i++)
		cin >> inteiros2[i];
	for (int i = 0; i < tam; i++)
		cout << inteiros2[i];

	free(inteiros2);

	system("pause");
	return 0;
}



//STREAM
#include <iostream>
void main() {
	/*std::cout.put('F').put('\n');
	char buffer[10];
	std::cin.get(buffer, 10);
	for (int i = 0; i < 10; i++) {
	std::cout.put(buffer[i]).put('\n');
	}*/

	char buffer[] = "Saida ";
	std::cout.write(buffer, 10);
	std::cin.read(buffer, 6);
	std::cout << std::cin.gcount() <<
		std::endl;
	std::cout.write(buffer, std::cin.gcount());

	system("pause");
}