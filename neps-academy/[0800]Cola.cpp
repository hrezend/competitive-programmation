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
	map <string, int> respostas;
	int n, qtd_pesca = 0;
	string input;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;
		if(respostas.count(input)){
			respostas[input]++;
		}
		else{
			respostas.insert(make_pair(input, 1));
		}
	}

	for(auto i = respostas.begin(); i != respostas.end(); i++){
		if((*i).second != 1){
			qtd_pesca += (*i).second;
		}
	}
	
	out(qtd_pesca);
}
