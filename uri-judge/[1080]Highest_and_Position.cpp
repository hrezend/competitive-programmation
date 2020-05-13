//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main() {
	int numero, numeroMaior;
	int posicao;	
	

	for(int i = 1; i < 101; i++){
		cin >> numero;
		
		if(numero > numeroMaior){
			numeroMaior = numero;
			posicao = i;
		}
	}

	cout << numeroMaior << endl;
	cout << posicao << endl;
}
