//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;	

int main(){

	//Declaração de variáveis
	int N, P;
	cin >> N;
	string Nome;
	string Redondetas[N];
	int Tarifas[N];
	int esq, dir, meio;
	int Total_Imposto = 0;
	
	//Entrada de dados
	for(int i = 0; i < N ; i++){
		cin >> Redondetas[i] >> Tarifas[i];
	}

	cin >> P;

	//Algorítmo de busca
	for(int i = 0; i < P; i++){
		cin >> Nome;
		esq=0; dir=N-1;
		while(esq <= dir){
			meio = (esq + dir)/2;
			if(Nome < Redondetas[meio]){
				dir = meio-1;
			}
			else if(Nome == Redondetas[meio]){
				Total_Imposto += Tarifas[meio];		
				break;
			}	
			else{
				esq = meio+1;
			}
		}
	}

	//Impressão de saída
	cout << Total_Imposto << endl;
}