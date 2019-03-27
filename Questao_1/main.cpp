#include "carro.h"
#include <iostream>

#include "classe.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Carro meuCarro("Fusca", 1976, 40, 7);
	meuCarro.mover(5);
	meuCarro.abastecer(35);
	
	cout << "Abastecido! Temos agora " << meuCarro.getQtdeCombustível() << "litros." << endl;
	cout << "Autonomia atual de " << meuCarro.getAutonomia() << "km." << endl;

	meuCarro.mover(127.6);
	meuCarro.mover(3.2);

	cout << "Já percorremos " << meuCarro.getDistanciaPercorrida() << "km" << endl;
	cout << "Ainda temos " << meuCarro.getQtdeCombustível() << " litros. " << endl;

	cout << "Autonomia atual de " << meuCarro.getAutonomia() << "km." << endl;
	return 0;	
}