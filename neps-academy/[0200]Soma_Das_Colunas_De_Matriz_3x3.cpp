//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int Matriz[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> Matriz[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		int Soma = 0;
		for(int j = 0; j < 3; j++){
			Soma += Matriz[j][i];
		}
		cout << "Coluna " << i << ": " << Soma << endl;
	}
}
