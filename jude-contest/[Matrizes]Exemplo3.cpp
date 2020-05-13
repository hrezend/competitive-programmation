//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int Linhas, Colunas;
	cin >> Linhas >> Colunas;
	int Matriz[Linhas][Colunas];

	int Condicao = 0;
	int Contador = 0;

	//Entrada de dados
	for(int i = 0; i < Linhas; i++){
		for(int k = 0; k < Colunas; k++){
			cin >> Matriz[i][k];
		}
	}

	//Algoritmo de tratamento da matriz
	for(int i = 0; i < Linhas; i++){
		for(int k = 0; k < Colunas; k++){
			if(i - 1 >= 0){
				if(Matriz[i-1][k] % 2 != 0){
					Contador++;
				}
			}
			if(i + 1 < Linhas){
				if(Matriz[i+1][k] % 2 != 0){
					Contador++;
				}
			}
			if(k - 1 >= 0){
				if(Matriz[i][k-1] % 2 != 0){
					Contador++;
				}
			}
			if(k + 1 < Colunas){
				if(Matriz[i][k+1] % 2 != 0){
					Contador++;
				}
			}

			if(Contador == 4){
				Condicao = 1;			
			}
		Contador = 0;
		}
	}
	
	//Impressão da saída
	if(Condicao == 1){
		cout << "Ufa!" << endl;
	}
	else{
		cout << "Socorro!" << endl;	
	}

}