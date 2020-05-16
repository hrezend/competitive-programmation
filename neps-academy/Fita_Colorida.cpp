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
	int Cores[N], Fita[N], Cores2[N];
	int Contador;

	for(int i = 0; i < N; i++){
		cin >> Fita[i];
	}
	
	for(int q = 0; q < N; q++){
		Contador = 0;
		if(Fita[q] != 0){
			for(int w = q; w < N; w++){
				if(Fita[w] != 0){
					Contador++;
				}
				if(Fita[w] == 0){
					Cores[q] = Contador;
					break;
				}
			}		
		}
		else if(Fita[q] == 0){
			Cores[q] = 0;
		}
	}

	for(int q = N-1; q >= 0; q--){
		Contador = 0;
		if(Fita[q] != 0){
			for(int w = q; w >= 0; w--){
				if(Fita[w] != 0){
					Contador++;
				}
				if(Fita[w] == 0){
					Cores2[q] = Contador;
					break;
				}
			}		
		}
		else if(Fita[q] == 0){
			Cores2[q] = 0;
		}
	}
	
	for(int k = 0; k < N; k++){
		if(Cores2[k] < 0 || Cores2[k] > 9){
			Cores2[k] = Cores[k];
		}
		if(Cores[k] > 9 || Cores[k] < 0){
			Cores[k] = Cores2[k];
		} 
		if(Cores2[k] < Cores[k] &&  Cores2[k] != 0){
			Cores[k] = Cores2[k];
		}
		if(Cores[k] == 0 && Cores2[k] != 0){
			Cores[k] = Cores2[k];
		}
		if(Cores[k] == Cores2[k]){
			Cores[k] = Cores2[k];
		}
	}

	for(int k = 0; k < N; k++){
		cout << Cores[k] << " ";
	}
	
	cout << endl;
}
