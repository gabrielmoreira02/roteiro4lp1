#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

	int jogador[24]={0}, maisvotado=0, votosmaisvotado=0, totalvotos=0, voto, count=0;

	cout << "Enquete: Quem foi o melhor jogador?"<<endl;

	while (true){
		cout << "Numero do jogador (0=fim):  ";
		cin >> voto;

		if (voto==0){
			cout << "Resultado da votacao"<<endl<<endl;
			break;
		}
		if (voto>23){
			cout << "Voto invalido" <<endl;
			count--;
		}

		jogador[voto]++;
		count++;
	}

	cout << "Foram computados " <<count<< " votos"<<endl;
	cout << "Jogador   Votos" <<endl;

	for (int i=1; i<=23;i++){
		cout << i << "   " << jogador[i] <<endl;
 
		if(jogador[i]>votosmaisvotado){
			votosmaisvotado = jogador[i];
			maisvotado =i;
		}
	}

	if (count==0){  							// ACONTECE APENAS SE TODOS OS VOTOS COMPUTADOS FOREM INVALIDOS
		cout<<"Erro: nenhum voto computado"<<endl;
		return 0;
	}
	cout << "O melhor jogador foi o numero "<<maisvotado<<",com "<<votosmaisvotado<<"votos, correspondendo a "<<votosmaisvotado*100/count<< "% do total de votos"<<endl;


}
