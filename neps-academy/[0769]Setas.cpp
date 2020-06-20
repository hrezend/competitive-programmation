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
	int n;
	cin >> n;
	int setas[n];
	int count_um = 0, count_dois = 0;

	for(int i = 0; i < n; i++){
		cin >> setas[i];
	}

	//verificar começando com setas[0] == 1
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			if(setas[i] != 1){
				count_um++;
			}
		}
		else{
			if(setas[i] != -1){
				count_um++;
			}
		}
	}

	//verificar começando com setas[0] == -1
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			if(setas[i] == 1){
				count_dois++;
			}
		}
		else{
			if(setas[i] == -1){
				count_dois++;
			}
		}
	}

	//imprime a quantidade mínima de mudanças para que as setas estejam sequencialmente invertidas
	out(min(count_um, count_dois));
}
