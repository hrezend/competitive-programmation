//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	int Saldo;
	int Doces[3];
	int Count = 0;

	cin >> Saldo;

	for(int i = 0; i < 3; i++){
		cin >> Doces[i];
	}
	sort(Doces, Doces+3);

	for(int i = 0; i < 3; i++){
		if(Saldo - Doces[i] >= 0){
			Saldo -= Doces[i];
			Count++;
		}
	}
	
	cout << Count << endl;
}
