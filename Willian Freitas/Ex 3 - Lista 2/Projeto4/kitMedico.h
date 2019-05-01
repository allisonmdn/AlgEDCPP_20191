#pragma once
#include <string>

using namespace std;
class kitMedico
{
public:
	kitMedico();
	~kitMedico();

	string usarKitMed();
	bool getKit() { return kit; }
	void setKit(int Kit) { kit = Kit; }

protected:
	bool kit;
};

