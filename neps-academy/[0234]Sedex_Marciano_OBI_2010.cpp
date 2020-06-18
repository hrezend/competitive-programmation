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
	int altura, profundidade, largura, raio;

	cin >> largura >> altura >> profundidade >> raio;

	int d1 = pow(largura, 2);
	int d2 = pow(altura, 2);
	int d3 = pow(profundidade, 2);

	if(sqrt(d1+d2+d3) <= raio*2){
		out("S");
	}
	else{
		out("N");
	}

}
