//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Tipo;
	int Palpites[5];
	int Contador = 0;

	cin >> Tipo;
	
	for(int i = 0; i < 5; i++){
		cin >> Palpites[i];
		if(Palpites[i] == Tipo){
			Contador++;
		}	
	}
	
	cout << Contador << endl;

}
