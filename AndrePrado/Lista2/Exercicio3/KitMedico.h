#pragma once
class KitMedico
{
public:
	KitMedico();
	~KitMedico();
	
	bool getKitmedico() { return tem; }

protected:
	void setKitMedico(int simNao);

private:
	bool tem;
};

