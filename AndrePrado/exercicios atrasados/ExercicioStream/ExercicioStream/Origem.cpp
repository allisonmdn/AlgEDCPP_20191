#include"Inventario.h"

using namespace std;

int main()
{
	Inventario inventario;

	inventario.setInventario(5, 50);

	inventario.adicionarItem("espada", 5, "arma");
	inventario.adicionarItem("bota", 2, "sapato");
	inventario.adicionarItem("pocaoCuraPequena", 1, "pocao");
	inventario.adicionarItem("elmoAlado", 5, "chapeu");
	inventario.adicionarItem("armaduraCompleta", 15, "armadura");

	cout << inventario.consultarItem(0) << endl;
	cout << inventario.consultarItem(1) << endl;
	cout << inventario.consultarItem(2) << endl;
	cout << inventario.consultarItem(3) << endl;
	cout << inventario.consultarItem(4) << endl;

	system("pause");
	return 0;
}