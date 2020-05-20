//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){	
	desync;

	int N[10] = {0};
	int Menor = 100000;
	vector <int> Ocorrencias;

	for(int i = 0; i < 10; i++){
		cin >> N[i];
		if(N[i] < Menor){
			Menor = N[i];
		}
	}

	for(int i = 0; i < 10; i++){
		if(N[i] == Menor){
			Ocorrencias.push_back(i);
			N[i] = (-1);
		}
	}

	cout << "Menor: " << Menor << endl;
	cout << "Ocorrencias: ";
	for(int i = 0; i < Ocorrencias.size(); i++){
		cout << Ocorrencias[i] << " ";
	}
	cout << endl;

	for(int i = 0; i < 10; i++){
		cout << N[i] << " ";
	}
	cout << endl;

}
