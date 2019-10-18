//#include<string>
//#include<iostream>


#include "carro1.h"

int main()
{
		Carro c1;
		c1.setAno (2018);
		c1.setMarca ("ford");
		c1.setCor ("cinza");

		Carro c2;

		c2.setAno (2012);
		c2.setMarca ("ferrari");

		Carro c3;
		c3.setAno  (2015);
		c3.setMarca  ("fiat");
		c3.setCor  ("cinza");

		Carro c4 ("jeep", 2005);
		
		c4.setCor ("cinza");
		

			Carro c5;
		c5.setAno  (2017);
		c5.setMarca  ("fiat");
		c5.setCor  ("cinza");
		c5.pneus = 2;			//atributo da classe

		Carro c6;
		c6.setAno (2015);
		c6.setCor ("preto");
		c6.setMarca ("ford");

		cout << c1.getMarca() << endl;
		cout << c1.getCor() << endl;
		cout << c1.getAno() << endl;
		cout << c1.pneus << endl;
		cout << c2.getMarca() << endl;
		cout << c2.getCor() << endl;
		cout << c2.getAno() << endl;
		cout << c2.pneus << endl;
		cout << c3.getMarca() << endl;
		cout << c3.getCor() << endl;
		cout << c3.getAno() << endl;
		cout << c3.pneus << endl;
		cout << c4.getMarca() << endl;
		cout << c4.getCor() << endl;
		cout << c4.getAno() << endl;
		cout << c5.getMarca() << endl;
		cout << c5.getCor() << endl;
		cout << c5.getAno() << endl;
		cout << c6.getMarca() << endl;
		cout << c6.getCor() << endl;
		cout << c6.getAno() << endl;




		return 0;
}
