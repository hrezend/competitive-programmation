//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool eh_composto[10000001];

void crivo(int n){
	eh_composto[1] = 1; // 1 não é composto, mas o vetor na verdade guarda os números que não são primos
	for(int i = 2; i <= n; ++i){
		if(!eh_composto[i]){
			for(int j = 2; j*i <= n; ++j){
				eh_composto[i*j] = 1;
			}
		}
	}
}

void solve(){
	int num, max = 10000001;
	cin >> num;
	crivo(max); // Complexidade O(n*log(log(n)))
	for(int i = 1; i <= num; i++){ // Complexidade O(Q)
		if(!eh_composto[i]){//Se composto é falso, então é primo, caso contrário é composto.	
			cout << i << " "; 
		}
	}
	cout << endl;
}

int main(){
  desync;
  solve();
}