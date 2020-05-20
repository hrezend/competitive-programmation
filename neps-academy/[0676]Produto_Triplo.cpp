//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N, Input;
	long long Produto = 0;
	cin >> N;
	int V[N] = {0};

	for(int i = 0; i < N; i++){
		cin >> V[i];
	}
	
	sort(V, V+N);

	Produto = V[N-1] * V[N-2] * V[N-3];

	cout << Produto << endl;
}
