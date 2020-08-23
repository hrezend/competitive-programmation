//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int n, input, ans = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> input;
		ans = ans|input;
	}

	cout << ans << endl;
}

int main(){
  desync;
  solve();
}