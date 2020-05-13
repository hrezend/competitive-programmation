//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int X, Z;
	int Somador = 0, Contador = 0;

	cin >> X >> Z;

	while(Z <= X){
		cin >> Z;
	}
	
	Somador += X;
	Contador ++;
	
	while(Somador < Z){
		X++;
		Contador++;
		Somador += X;
	}

	cout << Contador << endl;
}
