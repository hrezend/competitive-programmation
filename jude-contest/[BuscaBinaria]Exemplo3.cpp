//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int N, M;
	cin >> N >> M;
	int Vagas[N];
	int menor_i, aux;
	int esq, dir, meio;
	int Condicao = 0;
	
	//Entrada de dados
	for(int i = 0; i < N ; i++){
		cin >> Vagas[i];
	}
	
	//Algoritmo de ordenação
	for (int i = 0; i < N-1; i++){
		menor_i = i;
		for (int j = i+1 ; j < N; j++){
			if(Vagas[j] < Vagas[menor_i]){
				menor_i = j;
			}
		}
			aux = Vagas[i];
			Vagas[i] = Vagas[menor_i];
			Vagas[menor_i] = aux;
	}

	//Algoritmo de busca
	for(int i=0; i < M; i++) {
		esq=0; dir=N-1;
		while(esq <= dir){
			meio = (esq + dir)/2;
			if(M < Vagas[meio]){
				dir = meio-1;
			}
			else if(M == Vagas[meio]){
				break;
			}
			else{
				esq = meio+1;
			}
		}
		if(Vagas[meio] == M){
			Condicao = 1;
		}
	}

	//Impressão de saída
	if(Condicao == 1){
		cout << "Mota na moto" << endl;
	}
	else{
		cout << "Mota" << endl;
	}

}