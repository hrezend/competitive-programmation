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
	int h1, m1, h2, m2;
	int hora1 = 0 , hora2 = 0, minutos = 0;
		
	cin >> h1 >> m1 >> h2 >> m2;

	while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0){
		if(h1 == 0){
			h1 = 24;
		}
		if(h2 == 0){
			h2 = 24;
		}

		hora1 = (h1*60)+m1;
		hora2 = (h2*60)+m2;

		if(hora1 > hora2){
			minutos = (24*60) + (hora2-hora1); 
		}
		else{
			minutos = hora2 - hora1;
		}

		out(minutos);
		cin >> h1 >> m1 >> h2 >> m2;
	}
}
