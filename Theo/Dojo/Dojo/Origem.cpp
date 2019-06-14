#include<iostream>
#include<queue>
#include "paciente.h"
#include "fila.h"

using namespace std;

int main()
{
	paciente p[3];
	p[0].urgencia = 1;
	p[1].urgencia = 5;
	p[2].urgencia = 3;
/*
	struct LessThanByAge
	{
		bool operator()(const paciente& lhs, const paciente& rhs) const
		{
			return lhs.urgencia < rhs.urgencia;
		}
	};

	std::priority_queue<paciente, std::vector<paciente>, LessThanByAge> fila_pacientes;

	fila_pacientes.push(p[0]);
	fila_pacientes.push(p[1]);
	fila_pacientes.push(p[2]);

	cout << fila_pacientes.top().urgencia;*/

	fila<paciente> filaPilha;

	filaPilha.push(p[0]);
	filaPilha.push(p[1]);
	filaPilha.push(p[2]);

	cout << filaPilha.front()->urgencia << endl;

	filaPilha.pop();

	cout << filaPilha.front()->urgencia;


	//cout << filaPilha.top().urgencia;


	system("pause");
	return 0;
}