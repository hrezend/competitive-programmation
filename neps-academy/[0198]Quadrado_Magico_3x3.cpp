//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define imp(x) cout << x << endl

using namespace std;

int main(){
	desync;
	
	int N = 3;
	int Matriz[N][N];
	int SomaPrimaria = 0, SomaAuxiliar = 0, SomaAuxiliarD1 = 0, SomaAuxiliarD2 = 0, Situacao = 1;

	//Entrada de dados
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> Matriz[i][j];
		}
	}
	
	//Soma Primaria
	for(int q = 0; q < 1; q++){
		for(int w = 0; w < N; w++){
			SomaPrimaria += Matriz[q][w];
		}
	}

	//Soma das linhas
	for(int q = 0; q < N; q++){
		SomaAuxiliar = 0;
		for(int w = 0; w < N; w++){
			SomaAuxiliar += Matriz[q][w];
		}
		if(SomaAuxiliar != SomaPrimaria){
			Situacao = 0;
			break;
		}
	}

	//Soma das colunas
	for(int q = 0; q < N; q++){
		SomaAuxiliar = 0;
		for(int w = 0; w < N; w++){
			SomaAuxiliar += Matriz[w][q];
		}
		if(SomaAuxiliar != SomaPrimaria){
			Situacao = 0;
			break;
		}
	}

	//Soma da diagonal >
	for(int q = 0; q < N; q++){
		for(int w = q; w <= q; w++){
			SomaAuxiliarD1 += Matriz[q][w];
		}
	}
	if(SomaAuxiliarD1 != SomaPrimaria){
			Situacao = 0;
	}

	//Soma da diagonal <
	int Aux = N-1;
	for(int q = 0; q < N; q++){
		for(int w = Aux; w >= Aux; w--){
			SomaAuxiliarD2 += Matriz[q][w];
		}
		Aux--;
	}
	if(SomaAuxiliarD2 != SomaPrimaria){
			Situacao = 0;
	}

	//Impressao de Saida
	if(Situacao == 0){
		cout << "NAO" << endl;
	}
	else if(Situacao == 1){
		cout << "SIM" << endl;
	}

}
