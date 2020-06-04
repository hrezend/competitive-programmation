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
	int qtd_dias;
	double v[10006] = {0};
	double primeiro_dia = 0;
	double ultimo_dia = 0;

	cin >> qtd_dias;

	for(int i = 0; i < qtd_dias; i++){
		cin >> v[i];
	}

	primeiro_dia = v[0]*100;
	ultimo_dia = v[qtd_dias-1]*100;

	cout << fixed << setprecision(2) << ultimo_dia-primeiro_dia << endl;
}
