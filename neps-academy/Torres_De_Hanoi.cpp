//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int Teste = 0;
	int N;
	cin >> N;
	
	while(N != 0){
		int Resultado = 1;
		Teste++;

		for(int i = 1; i <= N; i++){
			Resultado *= 2;
		}

		cout << "Teste " << Teste << endl;
		cout << Resultado-1 << endl;
			
		cin >> N;
	}
}
