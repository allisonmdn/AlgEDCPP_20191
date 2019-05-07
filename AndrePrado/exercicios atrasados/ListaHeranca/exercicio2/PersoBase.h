#pragma once
#include<string>
class PersoBase
{
public:
	PersoBase();
	~PersoBase();

	//get
	virtual bool getVivo() { return vivo; }
	virtual int getVida() { return vida; }
	virtual int getVelocidade() { return vel; }

	//metodos
	std::string mover();
	std::string restaurarVida();
	std::string sofrerDano(int d);

protected:
	//set
	virtual void setVivo(bool b) { vivo = b; }
	virtual void setVida(int v) { vidaInicial = vida = v; }
	virtual void setVelocidade(int v) { vel = v; }

private:
	int vel, vida, vidaInicial;
	bool vivo;
};