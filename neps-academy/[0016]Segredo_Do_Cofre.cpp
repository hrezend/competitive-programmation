//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'

using namespace std;

int main(){

	desync;
	int v[10] = {0};
	int n, m;
	cin >> n >> m;
	int sequencia[n];
	int segredo[m];

	for(int i = 0; i < n; i++){
		cin >> sequencia[i];
	}
	for(int i = 0; i < m; i++){
		cin >> segredo[i];
	}

	int inicio = 0;
	int fim = segredo[1]-1;
	for(int i = 0; i < m; i++){
		for(int j = inicio; j < fim; j++){
			v[j]++;
		}
	}

	for(int i = 0; i < 10; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
