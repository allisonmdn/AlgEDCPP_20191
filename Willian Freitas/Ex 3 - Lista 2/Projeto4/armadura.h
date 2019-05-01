#pragma once
class armadura
{
public:
	armadura();
	~armadura();

	void usarArmadura();
	bool getArmadura() { return Armadura; }

protected:
	bool Armadura;
};

