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
	int v[3];
	int idade_m;

	cin >> idade_m;
	cin >> v[0];
	cin >> v[1];
	v[2] = idade_m - (v[0]+v[1]);

	cout << max(v[0],max(v[1],v[2])) << endl;
}
