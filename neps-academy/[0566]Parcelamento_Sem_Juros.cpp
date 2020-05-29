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
	int valor, parcelas, val_par, resto, aux = 0;
	cin >> valor >> parcelas;
	int v[parcelas];
	
	if(valor % parcelas == 0){
		val_par = valor/parcelas;
		for(int i = 0; i < parcelas; i++){
			v[i] = val_par;
		}
	}
	else{
		val_par = valor/parcelas;
		resto = valor%parcelas;
		for(int q = 0; q < parcelas; q++){
			v[q] = val_par;
		}
		for(;;){
			if(aux == parcelas){
				aux = 0;
			}
			if(resto == 0){
				break;
			}
			else{
				v[aux]++;
				resto--;
				aux++;
			}
		}
	}

	for(int q = 0; q < parcelas; q++){
		out(v[q]);
	}
}
