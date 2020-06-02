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
	int total_compra, total_pago;
	cin >> total_compra >> total_pago;

	while(total_compra != 0 && total_pago != 0){
		int notas = 0, troco = 0, resto = 0;	
		troco = total_pago - total_compra;
		notas = troco/100;
		resto = troco%100;
	
		if(resto >= 50){
	    	notas += resto/50;
	    	resto = resto%50;
		}
		if(resto >= 20){
	    	notas += resto/20;
	    	resto = resto%20;
		}
		if(resto >= 10){
	    	notas += resto/10;
	    	resto = resto%10;
		}
		if(resto >= 5){
	    	notas += resto/5;
	    	resto = resto%5;
		}
		if(resto >= 2){
	 	   notas += resto/2;
	  	   resto = resto%2;
		}

		if(notas == 2){
	  	  out("possible");   
		}
		else{
			out("impossible");
		}

		cin >> total_compra >> total_pago;
	}
}
