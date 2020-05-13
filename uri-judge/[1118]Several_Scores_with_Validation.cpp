//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){

	double nota1, nota2;
	int condicao = 1;

	while(condicao != 2){
		
		cin >> nota1;
		while(nota1 < 0 || nota1 > 10){
		    cout << "nota invalida" << endl;
	    	    cin >> nota1;
		}

		cin >> nota2;
		while(nota2 < 0 || nota2 > 10){
		    cout << "nota invalida" <<endl;
		    cin >> nota2;
		}

		cout << fixed << setprecision(2) << "media = " << (nota1+nota2)/2 << endl;
	
		do {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> condicao;
		} while (condicao < 1 || condicao > 2);
		

	}
}
