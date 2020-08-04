//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	map <int, pair<char, int>> pc;
	string answer = "";
	char let;
	int n, ini, fim, prox_pc = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ini >> let >> fim;
		pc[ini] =  make_pair(let, fim);
	}
	while(answer.length() < n){
        answer += pc[prox_pc].first;
		prox_pc = pc[prox_pc].second;
    }
	out(answer);
}

int main(){
  desync;
  solve();
}