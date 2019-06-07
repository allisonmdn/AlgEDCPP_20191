#include <concurrent_priority_queue.h>
#include <queue>
#include <string>

using namespace std;

struct paciente {
	int grau;
	int numero;
	string nome;
};

int espera = 0;
queue <paciente> fila[5];

int main() {

	paciente * p1;
	paciente * p2;
	paciente * p3;
	p1->grau = 3;
	p2->grau = 4;
	p3->grau = 1;

	p1->numero = 123;
	p2->numero = 321;
	p3->numero = 213;

	p1->nome = "Alisson";
	p2->nome = "Joao";
	p3->nome = "Maria";

	inserirEmFila(p1);
	inserirEmFila(p2);
	inserirEmFila(p3);

	tamFila();

	system("pause");

	return 0;
}

void inserirEmFila(paciente * p) 
{
	fila[p->grau].push(*p);
}

int tamFila()
{
	for (int i = 0; i < 5; i++)
	{
		espera += fila[i].size();
	}
	
	return espera;
}