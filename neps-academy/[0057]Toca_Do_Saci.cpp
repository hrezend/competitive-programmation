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
	int n, m, count_salas = 2;
	int emi_n, emi_m;

	cin >> n >> m;
	int toca[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> toca[i][j];
			if(toca[i][j] == 3){
				emi_n = i;
				emi_m = j;
			}
		}
	}

	while(true){
		count_salas++;
		if(toca[emi_n-1][emi_m] == 1 && emi_n-1 >= 0){
			toca[emi_n-1][emi_m] = 0;
			emi_n--;
		}
		else if(toca[emi_n][emi_m-1] == 1 && emi_m-1 >= 0){
			toca[emi_n][emi_m-1] = 0;
			emi_m--;
		}
		else if(toca[emi_n+1][emi_m] == 1 && emi_n+1 < n){
			toca[emi_n+1][emi_m] = 0;
			emi_n++;
		}
		else if(toca[emi_n][emi_m+1] == 1 && emi_m+1 < m){
			toca[emi_n][emi_m+1] = 0;
			emi_m++;
		}
		if(toca[emi_n-1][emi_m] == 2 || toca[emi_n+1][emi_m] == 2 || toca[emi_n][emi_m-1] == 2 || toca[emi_n][emi_m+1] == 2){
			break;
		}
	}

	out(count_salas);
}
