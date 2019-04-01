

#include <iostream>
#include "classe.h"

using namespace std;

/*
MÉTODOS CONSTRUTOR E DESTRUTOR
*/

Carro::Carro(string nome_,
			 int ano_,
			 int capacidadeTanque_,
			 float consumo_){
	modeloCarro = nome_;
	anoCarro = ano_;
	capacidadeTanque = capacidadeTanque_;
	consumoCarro = consumo_;
	qtdeCombustivel = 0;
	distanciaPercorrida = 0;
	cout << "Foi criado um " << getModeloCarro() << ", ano "
		 << getAnoCarro() << ". Suporta " << getCapacidadeTanque()
		 << " litros e consome " << getConsumoCarro()
		 << " km/L." << endl;
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
	return consumoCarro * (qtdeCombustivel - 1) ;
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

float Carro::getConsumoCarro(){
	return consumoCarro;
}

/*
Método que faz o carro se mover.
*/


void Carro::mover(float distancia_){
	if(getQtdeCombustivel() <= 1 || distancia_ > getAutonomia()){
		cout << "Combustível insuficiente para mover." << endl;
	}
	else{
		qtdeCombustivel -= distancia_/getConsumoCarro();
		distanciaPercorrida += distancia_; 
	}

}

/*
Método que permite abastecer.
*/

void Carro::abastecer(float combustivel_){
	if (getQtdeCombustivel() <= getCapacidadeTanque()){
		if ( getQtdeCombustivel() + combustivel_ > getCapacidadeTanque() ){
			qtdeCombustivel += (getCapacidadeTanque() - getQtdeCombustivel());
			cout << "Foi possível abastecer apenas "
				 << getCapacidadeTanque() - getQtdeCombustivel()
				 << " litros de combustível." << endl;
		}
		else{
			qtdeCombustivel += combustivel_;
		}
	}
	else{
		cout << " Não é possível abastecer. O tanque está pela boca! " << endl;
	}
	
}
