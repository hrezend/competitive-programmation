#include <bits/stdc++.h>
using namespace std;

int main() {
	int linhas, colunas;
	cin >> linhas >> colunas;
	
	int m1[linhas][colunas];
	int m2[linhas][colunas];
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			cin >> m1[i][j];
		}
	}
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			cin >> m2[i][j];
		}
	}
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			cout << (m1[i][j] - m2[i][j]) << " "; 
		}
		
		cout << endl;
	}
} 
