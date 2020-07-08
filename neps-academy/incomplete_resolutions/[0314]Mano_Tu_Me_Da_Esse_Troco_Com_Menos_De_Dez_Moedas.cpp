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
	vector <int> moedas;
	set <int> usadas;
	int troco, qtd_moedas, input;
	int count = 0;
	bool flag = true;
	cin >> qtd_moedas >> troco;

	for(int i = 0; i < qtd_moedas; i++){
		cin >> input;
		moedas.pb(input);
	}

	sort all(moedas);

	int resto = troco, aux = moedas.size();
	while(aux != 0){
		count += resto/moedas[aux-1];
		resto = resto%moedas[aux-1];
		usadas.insert(moedas[aux-1]);
		aux--;
	}

	if(usadas.size() > 9){
		flag = false;
	}
	if(flag && resto == 0){
		out("S");
	}
	else{
		out("N");
	}
}
