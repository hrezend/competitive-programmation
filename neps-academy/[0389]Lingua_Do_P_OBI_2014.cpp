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
	string frase, saida = "";
	getline(cin, frase);

	for(int i = 0; i < frase.length(); i++){
		if(frase[i] == ' '){
			saida += frase[i];
		}
		else{
			i++;
			saida += frase[i];
		}
	}
	out(saida);
}
