#include <bits/stdc++.h>
using namespace std;

int main() {
	int quantidade, multiplicador;
	
	cin >> quantidade;
	
  	int v[quantidade];
  	
  	for(int i = 0; i < quantidade; i++){
  		cin >> v[i];
  	}
  	
  	cin >> multiplicador;
  	
  	for(int i = 0; i < quantidade; i++){
  		cout << (v[i]*multiplicador) << " ";
  	}
} 
