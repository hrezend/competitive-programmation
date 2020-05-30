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
	int troco, resto = 0;
	int qtd1 = 0, qtd5 = 0, qtd10 = 0, qtd25 = 0, qtd50 = 0, qtd100 = 0, qtd_total;

	cin >> troco;

	qtd100 = troco/100;
	resto = troco % 100;
	if(resto >= 50){
		qtd50 += resto/50;
		resto = resto % 50;
	}
	if(resto >= 25){
		qtd25 += resto/25;
		resto = resto % 25;
	}
	if(resto >= 10){
		qtd10 += resto/10;
		resto = resto % 10;
	}
	if(resto >= 5){
		qtd5 += resto/5;
		resto = resto % 5;
	}
	if(resto >= 1){
		qtd1 += resto/1;
		resto = resto % 1;
	}

	qtd_total = qtd100+qtd50+qtd25+qtd10+qtd5+qtd1;

	out(qtd_total);
	out(qtd100);
	out(qtd50);
	out(qtd25);
	out(qtd10);
	out(qtd5);
	out(qtd1);
}
