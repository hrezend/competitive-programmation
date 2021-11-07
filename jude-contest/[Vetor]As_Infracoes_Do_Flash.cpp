#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> placasMemorizadas;
	int qtdPlacasVistas, qtdPlacasMemorizadas;
	
	cin >> qtdPlacasVistas >> qtdPlacasMemorizadas;
  	int v[qtdPlacasVistas];
  	
  	for(int i = 0; i < qtdPlacasVistas; i++){
  		cin >> v[i];
  	}
  	
  	for(int i = qtdPlacasVistas-1; i >= 0; i--){
  		if(v[i] != 0){
  			placasMemorizadas.push_back(v[i]);
  		}
  	}
  	
  	for(int i = qtdPlacasMemorizadas-1; i >= 0; i--){
  		cout << placasMemorizadas[i] << " ";
  	}
} 
