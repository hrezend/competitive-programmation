//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	vector <int> Divisores;
	int Count = 0;
	int Soma = 0;
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		if(N%i == 0){
			Count++;
			Soma+= i;
			Divisores.push_back(i);
		}
	}

	cout << Count << " divisor(es): ";
	for(int k = 0; k < Divisores.size(); k++){
		cout << Divisores[k] << " ";
	}
	cout << endl;

	cout << "Soma de divisores = " << Soma << endl;

	if(Count == 2){
		cout << "Primo" << endl;
	}
	else{
		cout << "Nao primo" << endl;
	}
}
