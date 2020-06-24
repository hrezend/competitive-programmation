//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

string dec_to_bin(int n){
	string conv = "", res = "";
	int resto = 0;
	while(n != 0){
		resto = n % 2;
		n = n / 2;
		if(resto == 1){
			conv += '1';
		}
		else if(resto == 0){
			conv += '0';
		}
	}
	for(int i = conv.length(); i >= 0; i--){
		res += conv[i];
	}
	return res;
}

int count_element(string s){
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '1'){
			count++;
		}
	}
	return count;
}

int main(){
	desync;
	int n, count = 0;
	string conversao;
	cin >> n;

	conversao = dec_to_bin(n);
	count = count_element(conversao);

	out(count); 
}
