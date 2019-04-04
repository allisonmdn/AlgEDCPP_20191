#include <iostream>
#include <fstream>
#include <string>
void main() {


	std::ofstream arquivo("teste.txt", std::ios::out);
	if (!arquivo.is_open())
		std::cout << "Não Abriu" << std::endl;
	arquivo << 10 << "\n" << "mapa1\n" << 2 <<" "<< 2 << "\n";
	arquivo << "l1c1" << " " <<  "l1c2" << "\n";
	arquivo << "l2c1" << " "<< "l2c2" << "\n";

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