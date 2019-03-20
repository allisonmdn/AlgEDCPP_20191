#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ptb");
	

	int qtd_nl, opcao;
	int* vetor;
	cout << "informe a quantidade de valores a serem lidos"<<endl;
	cin >> qtd_nl;
	vetor = (int*)calloc(qtd_nl, sizeof(int));
	cout << "informe os " << qtd_nl << " valores inteiros" << endl;
		while (qtd_nl > 0) {
			qtd_nl--;
			cin >> vetor[qtd_nl-1];
			
		}
		cout << "Informe 1- Impressão Ordem direta" << endl;
		cout<< "Informe 2 - Impressão inversa" << endl;
		cin >> opcao;
		if (opcao == 1)
		{
			for (int i = (qtd_nl-1); i >= 0; i--)
			{
				cout << "numero: " << vetor[i] << endl;
			}
		}
		if (opcao == 2)
		{
			for (int i = 0; i < qtd_nl; i++)
			{
				cout << "numero: " << vetor[i] << endl;
			}
		}
		free(vetor);
		


	
	//Bruno Muniz
	//Exercicio 01
	int p, q;
	cout << "Informe a quantidade de espaço para o vetor: ";
	cin >> q;
	int *vetor = (int*)calloc(q, sizeof(int));

	cout << "Escreva números para o vetor: ";;
	
	for (int i = 0; i < q; i++) {
		cin >> p;
		vetor[i] = p;
	}
	cout << "Valores do vetor: ";
		for (int i = 0; i < q; i++)
		{
			cout << vetor[i] << " ";

		}
		free(vetor);
		
//Exercicio 02
		int e,valor;
		
		cout<<"Informe a quantidade de espaço para o vetor: ";
		cin >> e;
		int * vetor = new int[e];
		for (int i = 0; i < e; i++) {
			cin >> valor;
			vetor[i]=valor;
		}
		for (int i = 0; i < e; i++) {
			cout << "Numero " << i + 1 << ": " << vetor[i]<<endl;
		}
		delete[]vetor;
		

		

	//Exercicio 03
	
	int e, n, valor;

	cout << "Informe a quantidade de espaço para o vetor: ";
	cin >> e;
	int *vetor = (int *)calloc(e, sizeof(int));
	for (int i = 0; i < e; i++)
	{
		cin >> valor;
		vetor[i] = valor;
	}

		cout << "Informe uma nova quantidade de espaço para o vetor: ";
		cin >> n;
		vetor = (int*)realloc(vetor, n * sizeof(int));
		for (int i = e; i < (n+e); i++)
		{
			cin >> valor;
			vetor[i] = valor;
		}


		for (int i = 0; i < (e+n); i++)
			cout << "Numero " << i + 1 << ": " << vetor[i] << endl;

	free(vetor);
	

	//Exercicio 04

	class arrayint
	
		public:
		arrayint();
		~arrayint();
	
		void AdicionarFinal();
		void RemoverFinal();
		void AdicionarPosEsp();
		void RemoverPosEsp();
		void LimiteAdicionar();
		void PegarValorEsp();
		void PegarFinal();
		void ExibirValores();


		
	system("pause");
}