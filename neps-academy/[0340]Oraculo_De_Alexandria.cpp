//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

long long oraculo(long long n, long long k){
	long long res = n;
	long long mult = 0;
	for(long long i = 1; i < n; i++){
		if(n-(k*i) >= 1){
			mult = n - (k*i);
			res = res * mult;
		}
		else{
			break;
		}
	}
	return res;
}

void solve(){
	long long qtd_casos;
	cin >> qtd_casos;
	
	while(qtd_casos--){
		string input, number = "";
		long long answer = 0, k = 0, n = 0, multiplicador = 1;
		cin >> input;
		for(long long i = 0; i < input.length(); i++){
			if(input[i] != '!'){
				number += input[i];
			}
			else{
				k++;
			}
		}
		for(long long i = number.length()-1; i >= 0; i--){
			n += (number[i]-48)*multiplicador;
			multiplicador *= 10;
		}
		answer = oraculo(n, k);
		out(answer);
	}
}

int main(){
  desync;
  solve();
}