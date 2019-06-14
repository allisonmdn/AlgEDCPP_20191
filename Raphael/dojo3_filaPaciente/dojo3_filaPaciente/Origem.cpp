#include<iostream>
#include<queue>
class Paciente {
public:
	int urgencia;
	std::string nome;
};

void main() {


	std::queue<Paciente> * filaPaciente = new std::queue<Paciente>[5];
	Paciente* pacientes = new Paciente[10];
	for (int i = 0; i < 5 ; i++) {
		pacientes[i].urgencia = i;
		filaPaciente[pacientes[i].urgencia].push(pacientes[i]);
	}
		
	/*for (int i = 4; i < 10; i++) {
		pacientes[i].urgencia = i/2;
		filaPaciente[pacientes[i].urgencia].push(pacientes[i]);
	}*/
	
	system("pause");

}