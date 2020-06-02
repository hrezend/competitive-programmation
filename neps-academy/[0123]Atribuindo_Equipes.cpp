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
	int menor_dif;
	int a, b, c, d;
	int v[3] = {0};

	cin >> a >> b >> c >> d;

	v[0] = abs((a+b) - (c+d));
	v[1] = abs((a+c) - (b+d));
	v[2] = abs((a+d) - (b+c));
	
	sort(v, v+3);

	out(v[0]);
}
