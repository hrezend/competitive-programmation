//Author: Hrz - 1ºSM de CC / ILP
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	string Entrada;
	getline (cin, Entrada);

	int TamPalavra = Entrada.size();

	for (int i = 0; i < TamPalavra; i++){
		if(Entrada.at(i) >= 65 &&  Entrada.at(i) <= 90){
			cout << Entrada.at(i);
		}
	}
}
