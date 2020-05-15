//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int Input, Anterior = 0, Contador = 1, MaiorSequencia = 0;
	int N;
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> Input;
    	if(Input == Anterior){
			Contador++;
		}
    	if(Contador > MaiorSequencia){			
			MaiorSequencia = Contador;
		}
		if(Input != Anterior){
			Anterior = Input;
			Contador = 1;
		}
	}

	cout << MaiorSequencia << endl;
}
