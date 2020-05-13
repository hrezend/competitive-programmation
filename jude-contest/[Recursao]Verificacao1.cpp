//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;


long long Calculadora(int Geracoes){
   	long long Coelhos;
 
		if(Geracoes < 1){
			return 0;
		}
		else if(Geracoes == 1){
			return 1;
		}
		else{
			return Coelhos = Calculadora(Geracoes-1)*4 - Calculadora(Geracoes-2)*3;
		}
}



int main(){
		int Geracoes;
		cin >> Geracoes;
		cout << Calculadora(Geracoes)*2 << endl;
}	