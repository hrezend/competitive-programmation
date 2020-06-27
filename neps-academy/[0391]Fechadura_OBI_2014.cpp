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
	int pinos, altura, count_move = 0, diferenca = 0;
	cin >> pinos >> altura;
	int fechadura[pinos];

	for(int i = 0; i < pinos; i++){
		cin >> fechadura[i];
	}
	for(int i = 0; i+1 < pinos; i++){
		diferenca = altura - fechadura[i];
		fechadura[i] += diferenca;
		fechadura[i+1] += diferenca;
		count_move += abs(diferenca);
	}

	if(fechadura[pinos-1] != altura){
		count_move = -1;
	}
	out(count_move);
}
