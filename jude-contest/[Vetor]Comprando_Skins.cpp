#include <bits/stdc++.h>
using namespace std;

int main() {
	int quantidade, saldo, auxiliar;
	
	cin >> quantidade;
	
  	int v[quantidade];
  	
  	for(int i = 0; i < quantidade; i++){
  		cin >> v[i];
  	}
  	
  	cin >> saldo;
  	auxiliar = saldo;
  	
  	for(int i = 0; i < quantidade; i++){
  		if(saldo-v[i] >= 0){
  			saldo = saldo - v[i];
  		}
  	}
  	
  	cout << (auxiliar-saldo) / 100 << endl;
} 
