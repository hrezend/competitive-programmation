//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool eh_composto[13000001];
int primos_tam[13000001];
vector <int> primos;

void crivo(int n){
	eh_composto[1] = 1;
	for(int i = 2; i <= n; ++i){
		if(!eh_composto[i]){
			for(int j = 2; j*i <= n; ++j){
				eh_composto[i*j] = 1;
			}
			primos.push_back(i);
			primos_tam[i] = primos.size();
		}
	}
}

void solve(){
	int casos, num, max = 13000001;
	cin >> casos;
	crivo(max);
	
	for(int i = 0; i < casos; i++){
		cin >> num;
		cout << primos_tam[num] << endl;
	}
}

int main(){
  desync;
  solve();
}