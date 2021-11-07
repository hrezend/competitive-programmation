#include <bits/stdc++.h>
using namespace std;

int main() {
	int quantidade;
	
	cin >> quantidade;
  	int v[quantidade];
  	
  	for(int i = 0; i < quantidade; i++){
  		cin >> v[i];
  	}
  	
  	for(int i = quantidade-1; i >= 0; i--){
  		cout << v[i] << " ";
  	}
  	
} 
