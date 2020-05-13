//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int N, SOMA = 0;
	cin >> N;
	int Presentes[N];
	
	//Entrada de dados
	for(int i = 0; i < N; i++){
		cin >> Presentes[i];
		SOMA += Presentes[i];
	}

	//Algorítmo de tratamento com impressão de saída
	for(int i = 0; i < N; i++){
		if(Presentes[i] >= SOMA/N){		
			cout << Presentes[i] << ": Sim!" << endl;
		}
		else{
			cout << Presentes[i] << ": Nao!" << endl;
		}
	}
	
}