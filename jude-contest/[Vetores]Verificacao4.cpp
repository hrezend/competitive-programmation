//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int N;
	cin >> N;
	int aux = 0;
	int Senhas[N] , Auxiliar [N];
	
	//Entrada de dados
	for(int i = 0; i < N; i++){
		cin >> Senhas[i];
	}
	
	//Algorítmo de tratamento
	for(int i = 0; i < N; i++){
		if(Senhas[i] % 2 == 1){
			Auxiliar[aux] = Senhas[i];
			aux++;
		}		
	}
	for(int i = 0; i < N; i++){
		if(Senhas[i] % 2 == 0){
			Auxiliar[aux] = Senhas[i];
			aux++;
		}		
	}
	
	//Impressão de saída
	for(int i = 0; i < N; i++){
		cout << Auxiliar[i] << endl;
	}
	
}