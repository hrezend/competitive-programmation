//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
	double valorEntrada, valorSaida;
	cin >> valorEntrada;

	if(valorEntrada <= 2000.00){
		cout << "Isento" << endl;	
	}
	else if(valorEntrada <= 3000.00){
		valorSaida = (valorEntrada - 2000.00) * 0.08;
		cout << fixed << setprecision(2) << "R$ " << valorSaida << endl;	
	}
	else if(valorEntrada <= 4500.00){
		valorSaida = (valorEntrada - 3000.00) * 0.18 + (1000.00 * 0.08);
		cout << fixed << setprecision(2) << "R$ " << valorSaida << endl;	
	}
	else{
		valorSaida = (valorEntrada - 4500.00) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08);
		cout << fixed << setprecision(2) << "R$ " << valorSaida << endl;	
	}

}
