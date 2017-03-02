
#include <iostream>

using namespace std;

int main (){

	int numero=1, maiornumero=0;

	while(numero!=0){
		cout << "Digite um numero" << endl;
		cin >> numero;
		if (numero>=maiornumero)
			maiornumero=numero;
	}

	cout <<"O maior numero eh "<<maiornumero;
}