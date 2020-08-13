//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int casos, x1, y1, x2, y2, difx, dify, answer = 0;
	cin >> casos;
	
	while(casos--){
		cin >> x1 >> y1 >> x2 >> y2;
		difx = abs(x1 - x2);
		dify = abs(y1 - y2);
		answer += pow(difx, 2);
		answer += pow(dify, 2);
	}
	out(answer);
}

int main(){
  desync;
  solve();
}