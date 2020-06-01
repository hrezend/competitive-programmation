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
	int total_atual, total_marcado;
	int ha, ma, hr, mr;

	cin >> ha >> ma >> hr >> mr;
	
	total_atual = (ha*60)+ma+45;
	total_marcado = (hr*60)+mr;

	if(total_marcado >= total_atual){
		out("Sucesso");
	}
	else{
		cout << "Atrasado " << total_atual-total_marcado << endl;
	}
	
}
