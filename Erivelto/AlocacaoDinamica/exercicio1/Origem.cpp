#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{


	int num;


	cout << "quantos numeros inteiros sera digitado:";
	cin >> num;
	int * Ptro = (int*)calloc(num, sizeof(int));

	for (int i = 0; i < num; i++)
	{
		cout << " digite os numeros " << i + 1 << " : ";
		cin >> Ptro[i];
	}

	for (int i = 0; i < num; i++) {


		cout << " Os numeros digitados foram: " << Ptro[i] << endl;
	}


	delete Ptro;





	system("pause");
	return 0;
}