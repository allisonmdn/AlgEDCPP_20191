#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

	int vetor[5];
	int x, i;

	printf("digite 10 numeros\n");

	for (i = 0; i < 5; i++)   
	{
		scanf("%d", &vetor[i]);
	}
	i = 1;
	x = vetor[0];

	while (i < 5) 
	{
		if (vetor[i] > x)
		{
			x = vetor[i];
		}
		i++;
	}

	printf("\n O maior numero que voce digitou foi %d .\n", x);
	getch()
    
	int vetor;
	cout << "vetor";
	cin >> vetor;
	int * iPtr = new int[vetor];           

	for (int i = 0; i < 10; i++) 
	{
		cout << "vetor" << i + 1 << " : ";
		cin >> iPtr[i];
	}

	for (int i = 0; i < ; i++)  
		cout << "vetor" << i + 1 << " is " << iPtr[i] << endl;
	delete iPtr;
	system("pause");
	return 0;
}