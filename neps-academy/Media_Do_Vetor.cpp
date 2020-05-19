//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

double media_vetor(int n, int v[]){

	double Soma = 0;

	for(int i = 0; i < n; i++){
		Soma += v[i];
	}

	return Soma/n;
}

int main(){	
	desync;

	int n, v[100100];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	cout << setprecision(2) << fixed << media_vetor(n,v) << endl;
}

