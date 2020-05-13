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
	int Pokemons[N];

	//Leitura de dados
	for(int i = 0; i < N ; i++){
		cin >> Pokemons[i];
	}

	//Declaração de variáveis parte dois
	int M;
	cin >> M;
	int Chave;
	int Condicao = 0;
	int Posicao;
	int Meio, Esquerda, Direita;

	//Algoritmo de busca binária com impressão de saídas para cada caso de teste
	for(int i = 0; i < M; i++){
		cin >> Chave;
		Esquerda = 0; Direita = N-1;
		while(Esquerda <= Direita){
			Meio = (Esquerda + Direita)/2;
			if(Chave < Pokemons[Meio]){
				Direita = Meio-1;
			}
			else if(Chave == Pokemons[Meio]){
				Condicao = 1;
				Posicao = Meio;				
				break;
			}
			else{
				Esquerda = Meio+1;
			}
		}

		if(Condicao == 1){
			cout << Posicao << endl;
			Condicao == 0;	
		}
		else{
			cout << "Pokemon nao encontrado!" << endl;
		}
	}


}