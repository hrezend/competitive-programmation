#include <bits/stdc++.h>
using namespace std;

int main() {
	int quantidade, numeroDaEsmeralda;
	bool flag = false;
	
	cin >> quantidade;
  	int v[quantidade];
  	
  	for(int i = 0; i < quantidade; i++){
  		cin >> v[i];
  	}
  	
  	cin >> numeroDaEsmeralda;
  	
  	for(int i = 0; i < quantidade; i++){
  		if(v[i] == numeroDaEsmeralda){
  			flag = true;
  		}
  	}
  	
  	if(flag){
  		cout << numeroDaEsmeralda << endl;
  	}
  	else{
  		cout << -1 << endl;
  	}
} 
