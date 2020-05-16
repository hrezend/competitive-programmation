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
	int Cores[N], Fita[N];
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

	
	for(int k = 0; k < N; k++){
		cout << Cores[k] << " ";
	}
	
	cout << endl;
}
