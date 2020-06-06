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

int soma_naturais(int n){
	int soma = 0;
	for(int i = n; i >= 0; i--){
		soma += i;
	}
	return soma;
}

int main(){
	desync;
	int n, resultado;
	cin >> n;

	resultado = soma_naturais(n);
	out(resultado);
}
