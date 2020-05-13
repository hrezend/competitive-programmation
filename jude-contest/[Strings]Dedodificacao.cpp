//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis e Entrada de dados
	string Entrada;
	getline (cin, Entrada);
	int TamPalavra = Entrada.size();

	//Impressão de saída
	for (int i = 0; i < TamPalavra; i++){
		if(Entrada.at(i) >= 65 &&  Entrada.at(i) <= 90){
			cout << Entrada.at(i);
		}
	}
	
}