#pragma once
#include<string>
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	//get
	bool getVivo() { return vivo; }
	int getVida() { return vida; }
	int getForca() { return forca; }
	int getVelocidade() { return vel; }
	int getArmadura() { return armadura; }

	//metodos
	std::string mover();
	std::string atacar();
	int defender(int fInim);
	std::string restaurarVida();
	std::string sofrerDano(int d);

protected:
	//set
	void setVivo(bool b) { vivo = b; }
	void setVida(int v) { vidaInicial = vida = v; }
	void setForca(int f) { forca = f; }
	void setVelocidade(int v) { vel = v; }
	void setArmadura(int a) { armadura = a; }

private:
	int vel, vida, vidaInicial, forca, armadura;
	bool vivo;
};

