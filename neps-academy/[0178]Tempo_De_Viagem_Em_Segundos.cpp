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
	int d1, h1, m1, d2, h2, m2;
	cin >> d1 >> h1 >> m1;
	cin >> d2 >> h2 >> m2;

	int segundos_ida = d1*3600*24 + h1*60*60 + m1*60;
	int segundos_volta = d2*60*60*24 + h2*60*60 + m2*60;
	int resultado = segundos_volta-segundos_ida;

	out(resultado);
}
