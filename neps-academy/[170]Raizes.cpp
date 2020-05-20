//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	double N, Input, Raiz;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> Input;
		
		Raiz = sqrt(Input);
		cout << fixed << setprecision(4) << Raiz << endl;
	}
}
