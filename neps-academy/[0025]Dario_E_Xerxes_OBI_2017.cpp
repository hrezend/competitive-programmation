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
	int qtd_rodadas, d, x;
	int count_d = 0, count_x = 0;

	cin >> qtd_rodadas;

	for(int i = 0; i < qtd_rodadas; i++){
		cin >> d >> x;
		if(d == 1 and (x == 2 or x == 3)){
			count_d++;
		}
		else if(d == 2 and (x == 3 or x == 4)){
			count_d++;
		}
		else if(d == 3 and (x == 4 or x == 0)){
			count_d++;
		}
		else if(d == 4 and (x == 0 or x == 1)){
			count_d++;
		}
		else if(d == 0 and (x == 1 or x == 2)){
			count_d++;
		}
		else{
			count_x++;
		}
	}
	if(count_d > count_x){
		out("dario");
	}
	else{
		out("xerxes");
	}
}
