//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	long long int N, Maior = 0;
	cin >> N;
	long long int V[N] = {0};

	for(int i = 0; i < N; i++){
		cin >> V[i];
	}

	long long int Produto = V[N-1]*V[N-2]*V[N-3];
	long long int Produto2 = V[0]*V[1]*V[N-1];
	cout << max(Produto, Produto2) << endl;
}
