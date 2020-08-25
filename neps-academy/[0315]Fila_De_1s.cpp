//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool dec_to_bin(long long int n){
	string conv = "";
	long long int resto = 0;
	if(n == 0){
		return false;
	}
	while(n != 0){
		resto = n % 2;
		n = n / 2;
		if(resto == 1){
			conv += '1';
		}
		else if(resto == 0){
			conv += '0';
			return false;
		}
	}
	return true;
}

void solve(){
	long long int num;
	cin >> num;
	
	if(dec_to_bin(num)){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
}

int main(){
  desync;
  solve();
}