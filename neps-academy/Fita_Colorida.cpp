//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N;
	cin >> N;
	int Cores[N], Fita[N], Cores1[N], Cores2[N];
	int Contador;

	for(int i = 0; i < N; i++){
		cin >> Fita[i];
	}

	for(int q = 0; q < N; q++){
		Contador = 0;
		for(int w = q; w < N; w++){
			if(Fita[q] == 0){
				Cores1[q] = 0;
				break;
			}
			if(Fita[w] != 0){
				Contador++;
			}
			if(Fita[w] == 0 || w == N-1){
				Cores1[q] = Contador;
				break;
			}		
		}
	}
	for(int q = N-1; q >= 0; q--){
		Contador = 0;
		for(int w = q; w >= 0; w--){
			if(Fita[q] == 0){
				Cores2[q] = 0;
				break;
			}
			if(Fita[w] != 0){
				Contador++;
			}
			if(Fita[w] == 0 || w == 0){
				Cores2[q] = Contador;
				break;
			}		
		}
	}

	for(int k = 0; k < N; k++){
		cout << Cores1[k] << " ";
	}
	cout << endl;
	for(int k = 0; k < N; k++){
		cout << Cores2[k] << " ";
	}
	cout << endl;

	for(int q = 0; q < N; q++){
		if(Cores1[q] == Cores2[q]){
			Cores[q] = Cores1[q];
		}
		if(Cores2[q] < Cores1[q]){
			Cores[q] = Cores2[q];
		}
		if(Cores1[q] < Cores2[q]){
			Cores[q] = Cores1[q];
		}
		if(Cores1[q] == 0 && Cores2[q] != 0){
			Cores[q] = Cores2[q];
		}
	}

	for(int k = 0; k < N; k++){
		cout << Cores[k] << " ";
	}
	
	cout << endl;
}
