//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main() {

	//Declaração de variáveis
	int N;
	cin >> N;
	char Letras[N];

	int Trocas, X, Y, Aux=0;
	char TL;

	//Entrada de dados
	for(int i = 0; i < N ; i++){
		cin >> Letras[i];
	}

	cin >> Trocas;

	//Algoritmo de tratamento
	while(Trocas > Aux){
		cin >> X >> Y;

		for(int i = 0; i < N; i++){
			if(i == X){
				TL = Letras[i];
				Letras[i] = Letras[Y];
				Letras[Y] = TL;
				Aux++;
			}
		}
	}

	//Impressão de saída
	for(int i = 0; i < N; i++){
		cout << Letras[i];
	}

}