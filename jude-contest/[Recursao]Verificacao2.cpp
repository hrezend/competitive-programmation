//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int f91(int Entrada){	
		int Saida = 0;
		if(Entrada <= 100){
			return Saida = f91(f91(Entrada+11));		
		}
		else{
			return Saida = (Entrada-10);	
		}


	return Saida;
}

int main(){
	int Entrada, Saida;
	cin >> Entrada;
	while(Entrada!= 0){
		Saida = f91(Entrada);
		cout << "f91(" << Entrada << ") = " << Saida << endl;
		cin >> Entrada;
	}
}