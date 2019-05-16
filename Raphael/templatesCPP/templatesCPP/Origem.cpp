#include <iostream>
template <class T>
class ExemploTemplate {
public:
	T info;
	
	template<class T>
	T metodoGenerico(T argumentGenerico){
		//implementar
	}
};

void main() {
	ExemploTemplate<int> * ie_templ = new ExemploTemplate<int>;
	ExemploTemplate<float> * fe_templ = new ExemploTemplate<float>;
	ExemploTemplate<float> * fe_templ = new ExemploTemplate<float>;
	ExemploTemplate<double> * de_templ = new ExemploTemplate<double>;
	de_templ->info = 2.4;
	fe_templ->info = 3.4f;
	ie_templ->info = 3;
	float aux = fe_templ->metodoGenerico(3.5f);
	system("pause");
}