//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){

	//Declaração de variáveis
	int N;
	cin>>N;
	int Q;
	int aux;
	int aux2=0;
	int esq, dir, meio;
	int vet[N];

	for (int i=0; i<N; i++){
		cin>>vet[i];
	}

	cin>>Q;

	for (int i=0; i<Q; i++){
		cin>>aux;
		esq=0;
		dir=N-1;
		while (esq<=dir){
			meio=(esq+dir)/2;
				if (aux<vet[meio]){
					dir=meio-1;
				}
				else if (aux==vet[meio]){
					aux2++;
					vet[meio]=0;
					break;
				}
				else{
					esq=meio+1;
				}
		}
	}

	if (aux2==Q){
		cout<<"Sim";
	}
	else {
		cout<<"Não";
	}

}