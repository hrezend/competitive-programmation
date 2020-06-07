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
	bool flag = true;
	int diametro, altura, largura, profundidade;

	cin >> diametro >> altura >> largura >> profundidade;

	if(altura < diametro){
		flag = false;
	}
	if(largura < diametro){
		flag = false;
	}
	if(profundidade < diametro){
		flag = false;
	}
	

	if(flag){
		out("S");
	}
	else{
		out("N");
	}
}
