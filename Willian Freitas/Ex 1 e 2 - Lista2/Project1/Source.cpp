#include <iostream>
#include <string>
#include "personagem.h"
#include "guerreiros.h"
#include "ranger.h"
#include "ladino.h"
#include "bardo.h"
#include "barbaro.h"
#include "sacerdoteDaLuz.h"
#include "sacerdoteDaTreva.h"
#include "clerigo.h"
#include "paladino.h"
#include "mago.h"

using namespace std;

int main() {
	guerreiros *per[10]; 

	for (int i = 0; i < 10; i++) {
		per[i] = new barbaro();
		cout << per[i]->defender();
	}

	system("pause");
}