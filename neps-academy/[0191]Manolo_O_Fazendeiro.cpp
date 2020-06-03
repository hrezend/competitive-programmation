//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

int main(){
	desync;
	int n, qtd_colheitas, sum = 0;
	int linha_i, linha_f, coluna_i, coluna_f;
	cin >> n;
	int matriz[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}

	cin >> qtd_colheitas;

	for(int i = 0; i < qtd_colheitas; i++){
		cin >> linha_i >> coluna_i >> linha_f >> coluna_f;

		for(int j = linha_i-1; j <= linha_f-1; j++){
			for(int k = coluna_i-1; k <= coluna_f-1; k++){
				sum += matriz[j][k];
				matriz[j][k] = 0;
			}
		} 
	}

	out(sum);
}
