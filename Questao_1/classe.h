#ifndef _CARRO_H_
#define _CARRO_H_

#include <string>

class Carro{
public:
	Carro(string modelo_, int ano_, int capacidadeTanque_, int consumo_);
	~Carro();

	//Métodos GETTERS
	float getQtdeCombustivel();
	float getDistanciaPercorrida();
	float getAutonomia();
	string getModeloCarro();
	int getAnoCarro();
	int getCapacidadeTanque();

	void set

	void mover(float distancia_);
	void abastecer(float combustivel_);


private:
	string modeloCarro;
	int anoCarro;



	int capacidadeTanque; // Capacidade Máxima em litros de combustível.
	float consumoCarro; // Consumo em quilômetros por litro.
	float qtdeCombustivel; // 
	float distanciaPercorrida;

};

#endif // _CARRO_H_
