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
	int troco, resto = 0, moedas = 0;
	cin >> troco;
	
	moedas = troco/100;
	resto = troco % 100;
	if(resto >= 50){
		moedas += resto/50;
		resto = resto % 50;
	}
	if(resto >= 25){
		moedas += resto/25;
		resto = resto % 25;
	}
	if(resto >= 10){
		moedas += resto/10;
		resto = resto % 10;
	}
	if(resto >= 5){
		moedas += resto/5;
		resto = resto % 5;
	}
	if(resto >= 1){
		moedas += resto/1;
		resto = resto % 1;
	}

	out(moedas);
}
