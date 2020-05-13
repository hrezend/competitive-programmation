//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){

	int contador = 0;
	double nota, media;

	while(contador < 2){
		cin >> nota;

		if(nota >= 0 && nota <= 10){
			contador++;
			media += nota;
		}
		else{
			cout << "nota invalida" << endl;
		}		


	}
	
	cout << fixed << setprecision(2) << "media = " << media/2 << endl;
}
