#include <iostream>
#include <cstdlib>


using namespace std; 


int main()
{


	int num;
	int newNum;


	cout << "quantos numeros inteiros sera digitado:";
	cin >> num;
	int * Ptro = (int*)calloc(num,sizeof(int));

	for (int i = 0; i < num; i++)
	{
		cout << " digite os numeros " << i + 1 << " : ";
		cin >> Ptro[i];
	}

	for (int i = 0; i < num; i++) {


		cout << " Os numeros digitados foram: " << Ptro[i] << endl;
	}

	cout << "Digite mais numeros. Informe a quantidade de inteiros que sera digitado:";
	cin >> newNum;	
	int* newArr = new int[newNum+num];

	memcpy(newArr, Ptro, num * sizeof(int)); //(array novo, array antigo, tamanho novo *  sizeof(int))


	for (int i = num; i < num + newNum; i++)
	{
		cout << " digite os numeros " << i + 1 << " : ";
		cin >> newArr[i];
	}

	for (int i = 0; i < num + newNum; i++) {

		cout << " Os numeros digitados foram: " << newArr[i] << endl;
	}



	free (Ptro);


	system("pause");
	return 0;
}