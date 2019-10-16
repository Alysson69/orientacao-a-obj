#include"Carro.h"
#include<iostream>
//using namespace std;

void Carro::setMarca(string x) {
	marca = x;
}
string Carro::getMarca()
{
	return marca;
}
void Carro::setCor(string z) {
	cor = z;
}

string Carro::getCor()
{
	return cor; 
}
Carro::Carro()
{
	cor = "preto";
}
void Carro::setAno(int y)
{
	if (y > 1990)
		ano = y;
	else
		ano = 1990;
}
int Carro::getAno() 
{
	return ano;
}
Carro::Carro(string marca, int ano)
{
	this->marca = marca;
	this->ano = ano;
}
Carro::~Carro() {
	cout << "Carro foi destruido" << endl;
}
int Carro::pneus = 4;			//atributo da classe
