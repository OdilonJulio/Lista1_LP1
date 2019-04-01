

#include "classe.h"

using namespace std;

/*
MÉTODOS CONSTRUTOR E DESTRUTOR
*/

Carro::Carro(string nome_, int ano_, int capacidadeTanque_, int consumo){
	modeloCarro = nome_;
	anoCarro = ano_;
	capacidadeTanque = tanque_;
	consumoCarro = consumo_;
	qtdeCombustivel = 0;
	distanciaPercorrida = 0;
	cout << " Foi criado um " << getModeloCarro() << ", ano "
		 << getAnoCarro() << ". Suporta " << getCapacidadeTanque()
		 << " litros e consome " << getAutonomia() << " km/L."
}
Carro::~Carro(){}

/*
MÉTODOS GETTERS
*/

float Carro::getQtdeCombustivel(){
	return qtdeCombustivel;
}

float Carro::getDistanciaPercorrida(){
	return distanciaPercorrida;
}

float Carro::getAutonomia(){
	return consumoCarro * qtdeCombustivel;
}

string Carro::getModeloCarro(){
	return modeloCarro;
}
	
int Carro::getAnoCarro(){
	return anoCarro;
}

int Carro::getCapacidadeTanque(){
	return capacidadeTanque;
}

/*
Método que faz o carro se mover.
*/


void Carro::mover(float distancia_){
	if(getQtdeCombustivel() <= 1){
		cout << "Combustível insuficiente para mover." << endl;
	}
	else{
XXXXXXXXXXXXXXXXXXXXXXXX TERMINAR ESSE CÓDIGO XXXXXXXXXXXXXXXXXX
	}
}

/*
Método que permite abastecer.
*/

void Carro::abastecer(float combustivel_){
	if (getQtdeCombustivel() <= getCapacidadeTanque()){
		if ( getQtdeCombustivel() + combustivel_ > getCapacidadeTanque() ){
			qtdeCombustivel += getCapacidadeTanque() - getQtdeCombustivel();
			cout << "Foi possível abastecer apenas "
				 << getCapacidadeTanque() - getQtdeCombustivel()
				 << " litros de combustível." << endl;
		}
		else{
			qtdeCombustivel += combustivel_;
			cout << "Abastecido. Temos agora "
				 << getQtdeCombustivel() << " litros."
		}
	}
	else{
		cout << " Não é possível abastecer. O tanque está pela boca! "
	}
	
}
