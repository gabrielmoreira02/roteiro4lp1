#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(){

	srand (time(NULL));

	int dado, numerolancamentos, i, j[7]={0}, k=0;

	cout << "Quantas vezes voce deseja lancar o dado?" <<endl;
	cin >> numerolancamentos;

/*	for (i=0;i<=6;i++){
		j[i]=0;
	} */

	for (i=0;i<=numerolancamentos;i++){
		dado = 1+(rand() %6);		// COMO O RAND GERA UM NUMERO TIPO DECIMAL E CONSIDERAMOS APENAS A PARTE INTEIRA, A CHANCE
		if(dado==7){				// DO RESULTADO DAR 7 EH APROX 0, MESMO ASSIM, CRIAMOS ESSE IF PARA CONTER AS EXCESSOES
		}  
		
		j[dado]++;
		k++;
	}

	for (i=1;i<=6;i++){
		cout << "O numero de vezes que o resultado deu "<<i<<" foi " <<j[i]<< " e isso representa "<<j[i]*100/k<<"%"<<endl;
	}



}
