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
	int troco, qtd_moedas, input;
	int count = 0;
	bool flag = true;
	cin >> qtd_moedas >> troco;

	for(int i = 0; i < qtd_moedas; i++){
		cin >> input;
		moedas.pb(input);
	}

	sort all(moedas);
	out(troco);
	for(int i = 0; i < moedas.size(); i++){
		cout << "Moeda em i = " << i << " = " << moedas[i] << endl;
	}

	int resto = troco, aux = moedas.size();
	while(aux != 0){
		count += resto/moedas[aux-1];
		resto = resto%moedas[aux-1];
		aux--;
	}

	out(count);

	if(count >= 10){
		flag = false;
	}
	if(flag){
		out("S");
	}
	else{
		out("N");
	}
}
