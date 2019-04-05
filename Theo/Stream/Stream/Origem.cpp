#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main()
{
	/*cout.put('F').put('\n');
	
	char buffer[10];
	cin.get(buffer, 10);

	for (int i = 0; i < 10; i++)
	{
		cout.put(buffer[i]).put('\n');
	}*/
	
	/*char buffer[] = "Testando";
	cout.write(buffer, 8);
	cin.read(buffer, 5);
	cout.write(buffer, cin.gcount());

	ofstream arquivo("teste.txt", ios::out);
	ifstream arquivoI("teste.txt", ios::in);

	if (arquivo.is_open())
	{
		arquivo << 10 << "\n" << "mapa1\n" << 2 << " " << 2 << "\n";
		arquivo << "l1c1" << " " << "l1c2" << "\n";
		//arquivo << "Theodoro Ilha Gorck";
		arquivo << "l2c1" << " " <<"l2c2" << "\n";
		cout << "Arquivo aberto!\n";


		arquivo.close();
	}
	else
	{
		cout << "Erro ao abrir o arquivo ";
	}

	//Arquivo ifstream
	int nMapas, nColunas, nLinhas;
	string nomeMapa, linha1_Col1, linha1_Col2;
	//string nome;

	if (arquivoI.is_open())
	{
		arquivoI >> nMapas;
		cout << "Numero de Mapas = " << nMapas << endl;
		arquivoI >> nomeMapa;
		cout << "Nome do Mapa = " << nomeMapa << endl;
		arquivoI >> nColunas >> nLinhas;
		cout << nColunas << " " << nLinhas << endl;
		arquivoI >> linha1_Col1 >> linha1_Col2;
		cout << linha1_Col1 << " " << linha1_Col2 << endl;
		/*getline(arquivoI, nome);
		cout << nome;

		arquivoI.close();
	}
	else
	{
		cout << "Erro ao abrir o arquivo ";
	}*/
	system("pause");
}