#ifndef CARRO_H
#define CARRO_H

#include<string>
//using namespace std;
class Carro
{
public:
	static int pneus;					//atributo da classe

	void setMarca(string x);
	string getMarca();
	void setAno(int y);
	int getAno();
	void setCor(string z);
	string getCor();

private:
	string marca;
	int ano;
	string cor;
};
#endif /* CARRO_H */	
