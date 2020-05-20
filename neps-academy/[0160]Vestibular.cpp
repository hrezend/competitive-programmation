//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N, Contador = 0;
	string Gabarito, Marcadas;
	
	cin >> N >> Gabarito >> Marcadas;	

	for(int i = 0; i < Gabarito.length(); i++){
		if(Gabarito[i] == Marcadas[i]){
			Contador++;
		}	
	}

	cout << Contador << endl;
}
