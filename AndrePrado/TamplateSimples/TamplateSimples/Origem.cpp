#include<iostream>

template<class T>
class ExemploTemplate {
public:
	T info;

	template<class T>
	T metodoGenerico(T argumentoGenerico) {
		//implementar
	}
};

int main() {
	ExemploTemplate<int> * ie_templ = new ExemploTemplate<int>;
	ExemploTemplate<float> * fe_templ = new ExemploTemplate<float>;
	ExemploTemplate<double> * de_templ = new ExemploTemplate<double>;

	ie_templ->info = 5;
	fe_templ->info = 5.5f;
	de_templ->info = 7.5;

	float aux = fe_templ->metodoGenerico(3.5f);

	system("pause");
	return 0;
}