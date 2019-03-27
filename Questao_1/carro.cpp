

#include "classe.h"

using namespace std;

/*
MÉTODO CONSTRUTOR
*/

Carro::Carro(string nome, int ano, int tanque, int consumo){
	nomeCarro = nome;
	anoCarro = ano;
	capacidadeTanque = tanque;
	consumoCarro = consumo;
	combustivelAtual = 0;
	getDistanciaPercorrida = 0;
	cout << "Foi criado um " << getQtdeCombustivel() << 
}

float Carro::getQtdeCombustivel(){
	return combustivelAtual;
}

float Carro::getDistanciaPercorrida(){
	return distanciaPercorrida;
}

float Carro::getAutonomia(){
	return consumoCarro * combustivelAtual;
}

void Carro::mover(){

}

void Carro::abastecer(){

}
