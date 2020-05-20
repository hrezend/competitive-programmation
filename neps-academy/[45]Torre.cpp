//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	//Declaracao de variaveis
	int N;
	cin >> N;
	int Matriz[N][N], MemL[N] = {0}, MemC[N] = {0};
	int Max = 0, Soma = 0;

	//Entrada de dados
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> Matriz[i][j];
			MemL[i] += Matriz[i][j];
			MemC[j] += Matriz[i][j];
		}
	}
	
	//Contagem
	int i = 0, j = 0;
	while(i != N && j != N){
			Soma = MemL[i] + MemC[j] - (2*Matriz[i][j]);
			if(Soma > Max){
				Max = Soma;
			}

			j++;
			if(j % N == 0){
				i++;
				j = 0;
			}
	}
	
	//Impressao de resultados
	cout << Max << endl;
}
