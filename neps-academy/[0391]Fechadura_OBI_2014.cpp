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
	vector <int> pinos;
	int input, qtd_pinos, altura, count_move = 0;
	cin >> qtd_pinos >> altura;

	for(int i = 0; i < qtd_pinos; i++){
		cin >> input;
		pinos.pb(input);
	}

	for(int i = 0; i < qtd_pinos-1; i++){
		if(pinos[i] == altura){
			pinos.erase(pinos.begin()+i);
			continue;
		}
		else if(pinos[i+1] == altura){
			pinos.erase(pinos.begin()+i+1);
			continue;
		}
		while(pinos[i] != altura){
			if(pinos[i] > altura){
				pinos[i]--;
			}
			else{
				pinos[i]++;
			}
			if(pinos[i+1] > altura){
				pinos[i+1]--;
			}
			else{
				pinos[i+1]++;
			}
			count_move++;
		}
	}

	out(count_move);
}
