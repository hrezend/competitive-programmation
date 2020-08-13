//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int xm, ym, xr, yr, answer = 0;
	cin >> xm >> ym >> xr >> yr;
	
	answer += abs(xm - xr);
	answer += abs(ym - yr);
	
	out(answer);
}

int main(){
  desync;
  solve();
}