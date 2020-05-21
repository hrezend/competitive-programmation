//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	long long int N, Produto = 0, Maior = 0;
	cin >> N;
	long long int V[N] = {0};

	for(int i = 0; i < N; i++){
		cin >> V[i];
	}

	int i, j, k;
	for(i = 0; i < N; i++){
		for(j = i+1; j < N; j++){
			if(j+1 > N){
				break;
			}
			for(k = j+1; k < N; k++){
				if(k+1 > N){
					break;
				}
				Produto = V[i] * V[j] * V[k];
				if(Produto > Maior){
					Maior = Produto;
				}
			}
		}
	}
	cout << Maior << endl;
}
