#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(){

	srand (time(NULL));

	int numero=0, numerocerto=0;

	numerocerto = rand() %100;

	while (numero!=numerocerto){

		cout << "Digite um numero"<<endl;
		cin >> numero;

		if (numero<numerocerto){
			cout << "Muito baixo, tente novamente" <<endl;
		}
		if (numero>numerocerto){
			cout << "Muito alto, tente novamente" <<endl;
		}
	}

	cout << "Parabens, voce acertou" << endl;


}