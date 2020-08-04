//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
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
	int qtd_casos, ocupacao, capacidade, count = 0;
	
	cin >> qtd_casos;
	
	for(int i = 0; i < qtd_casos; i++){
		cin >> ocupacao >> capacidade;
		if(capacidade-ocupacao >= 2){
			count++;
		}
	}
	out(count);
}