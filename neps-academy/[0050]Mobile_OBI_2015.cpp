//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define imp(x) cout << x << endl

using namespace std;

int main(){
	desync;
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(a == (b+c+d) && d == (b+c) && b == c){
		imp("S");
	}
	else{
		imp("N");
	}
}
