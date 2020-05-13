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
	string Pokemons[N];
	string Auxiliar;
	cin.ignore();

	//Entrada de dados
	for(int i = 0; i < N ; i++){
		getline(cin, Pokemons[i]);
	}
	
	//Algorítmo de ordenação
	for(int i = 0; i < N; i++){
		int MenorPos = i;
		for(int j = 0; j < N-1; j++){
			if(Pokemons[MenorPos] > Pokemons[j]){
				Auxiliar = Pokemons[j];
				Pokemons[j] = Pokemons [i];
				Pokemons[i] = Auxiliar;
			}			
		}
	}

	//Saída de dados em ordem alfabética decrescente
	for(int i = 0; i < N ; i++){
		cout << Pokemons[i] << endl;
	}

}