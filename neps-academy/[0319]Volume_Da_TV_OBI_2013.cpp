//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int volume, qtd_trocas, input;
	cin >> volume >> qtd_trocas;
	
	while(qtd_trocas--){
		cin >> input;
		if(volume+input > 100){
			volume = 100;
		}
		else if(volume+input < 0){
			volume = 0;
		}
		else{
			volume += input;
		}
	}
	out(volume);
}

int main(){
  desync;
  solve();
}