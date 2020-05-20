//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N, Contador = 0;
	cin >> N;
	int Vetor[N];

	for(int i = 0; i < N; i++){
		cin >> Vetor[i]; 
	}
	for(int j = 0; j < N; j++){
		if(Vetor[j] == 1 && Vetor[j+1] == 0 && Vetor[j+2] == 0){
			Contador++;
		}
	}

	cout << Contador << endl;
	  
}
