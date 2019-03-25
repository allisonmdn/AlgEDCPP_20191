#include "sacerdoteTrevas.h"



sacerdoteTrevas::sacerdoteTrevas()
{
	bem = true;
}


sacerdoteTrevas::~sacerdoteTrevas()
{
}

void sacerdoteTrevas::causarFerimento()
{
	qtdDano = rand() % 8 + 1;
}

void sacerdoteTrevas::destruirBem()
{
	if (bem == true)
		bem = false;
}
