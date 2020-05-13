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
	int Forca[N];
	int Poder[N];
	string Auxiliar;
	int Auxiliar2, Auxiliar3;

	//Leitura dos dados
	for(int i = 0; i < N ; i++){
		cin >> Pokemons[i];
		cin >> Forca[i];
		cin >> Poder[i];
	}

	//Algorítmo de ordenação de modo select
	for(int i = 0; i < N; i++){
		int MenorPos = i;
		for(int j = 0; j < N-1; j++){
			if(Poder[MenorPos] > Poder[j]){
				Auxiliar2 = Poder[j];
				Poder[j] = Poder[i];
				Poder[i] = Auxiliar2;				
				
				Auxiliar3 = Forca[j];
				Forca[j] = Forca[i];
				Forca[i] = Auxiliar3;			

				Auxiliar = Pokemons[j];
				Pokemons[j] = Pokemons [i];
				Pokemons[i] = Auxiliar;
			}			
		}
	}

	//Impressão ordenada de forma decrescente
	for(int i = 0; i < N ; i++){
		cout << Pokemons[i] << " " << Poder[i] << endl;
	}

}