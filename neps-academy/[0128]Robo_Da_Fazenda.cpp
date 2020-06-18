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
	int n, c, s, direcao, count = 0, aux = 1;
	cin >> n >> c >> s;
	int campo[n+2];

	for(int i = 0; i < n+2; i++){
		campo[i] = i;
	}

	if(campo[aux] == s){
		count++;
	}

	for(int i = 0; i < c; i++){
		cin >> direcao;
		aux = aux + direcao;
		if(aux == n+1){
			aux = 1;
		}
		else if(aux == 0){
			aux = n;
		}
		if(campo[aux] == s){
			count++;
		}
	}

	out(count);
}
