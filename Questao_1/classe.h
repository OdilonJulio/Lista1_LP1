#ifndef _CARRO_H_
#define _CARRO_H_
#include <iostream>
#include <string>
using namespace std;

class Carro{
public:
	Carro(string nome_, int ano_, int capacidadeTanque_, float consumo_);
	~Carro();

	//Métodos GETTERS
	float getQtdeCombustivel();
	float getDistanciaPercorrida();
	float getAutonomia();
	string getModeloCarro();
	int getAnoCarro();
	int getCapacidadeTanque();
	float getConsumoCarro();

	void mover(float distancia_);
	void abastecer(float combustivel_);


private:
	string modeloCarro;
	int anoCarro;
	int capacidadeTanque; // Capacidade Máxima em litros de combustível.
	float consumoCarro; // Consumo em quilômetros por litro.
	float qtdeCombustivel; // Quantidade atual de combustível.
	float distanciaPercorrida;

};

#endif // _CARRO_H_
