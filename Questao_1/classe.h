#ifndef _CARRO_H_
#define _CARRO_H_

#include <string>

class Carro{
public:
	Carro(string nome, int ano, int tanque, int consumo);
	~Carro();

	float getQtdeCombustivel();
	float getDistanciaPercorrida();
	float getAutonomia();

	void mover();
	void abastecer();


private:
	string nomeCarro;
	int anoCarro;
	int capacidadeTanque;
	float consumoCarro;
	float combustivelAtual;
	float distanciaPercorrida;

};

#endif // _CARRO_H_
