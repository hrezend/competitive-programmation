//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int qtd_cases, input;
	cin >> qtd_cases;
	while(qtd_cases--){
		cin >> input;
		int answer = (input/2) + 1;
		out(answer);
	}
}

int main(){
  desync;
  solve();
}