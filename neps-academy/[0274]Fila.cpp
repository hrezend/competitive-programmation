//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
using namespace std;

int main(){
	desync;
	
	vector <int> Fila, Sai;
	int N, M, Remove, Input;

	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> Input;
		Fila.pb(Input);
	}

	cin >> M;
	for(int s = 0; s < M; s++){
		cin >> Remove;
		Sai.pb(Remove);
	}

	sort(Sai.begin(), Sai.end());

	for(int i = 0; i < N; i++){
		bool Cond = binary_search(Sai.begin(), Sai.end(), Fila[i]);
		if(!Cond){
			cout << Fila[i] << " ";
		}
	}

	cout << endl;
}
