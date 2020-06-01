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

int main(){
	desync;
	set <int> fig_carim, figs;
	int input, count = 0;
	int qtd_fig, qtd_fig_carim, qtd_fig_compr;

	cin >> qtd_fig >> qtd_fig_carim >> qtd_fig_compr;

	for(int i = 0; i < qtd_fig_carim; i++){
		cin >> input;
		fig_carim.insert(input);
	}	
	for(int i = 0; i < qtd_fig_compr; i++){
		cin >> input;
		if(fig_carim.count(input)){
			figs.insert(input);	
		}
	}
	
	out(qtd_fig_carim - figs.size());
	
}
