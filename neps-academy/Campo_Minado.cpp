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
	int Minas[N];
	int Area[N];
	int Contador = 0;

	for(int i = 0; i < N; i++){
		cin >> Minas[i]; 
	}
	for(int j = 0; j < N; j++){
		if(Minas[j] == 1){
			Contador = 1;
			if(Minas[j-1] == 1){
				Contador += 1;
			}
			if(Minas[j+1] == 1){
				Contador += 1;
			}
		}
		else if(Minas[j] == 0){
			Contador = 0;
			if(Minas[j-1] == 1){
				Contador += 1;
			}
			if(Minas[j+1] == 1){
				Contador += 1;
			}
		}

		Area[j] = Contador;
	}

	for(int k = 0; k < N; k++){
		cout << Area[k] << endl;
	}
	  
}
