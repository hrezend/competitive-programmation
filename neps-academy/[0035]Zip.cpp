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
	int pontos_lia = 0, pontos_ca = 0;
	int l1, l2, c1, c2;
	cin >> l1 >> l2 >> c1 >> c2;

	if(l1 == l2){
		pontos_lia = (l1+l2)*2;
	}
	else if(l1 == l2+1 || l1 == l2-1){
		pontos_lia = (l1+l2)*3;
	}
	else{
		pontos_lia = l1+l2;
	}

	if(c1 == c2){
		pontos_ca = (c1+c2)*2;
	}
	else if(c1 == c2+1 || c1 == c2-1){
		pontos_ca = (c1+c2)*3;
	}
	else{
		pontos_ca = c1+c2;
	}



	if(pontos_lia == pontos_ca){
		out("empate");
	}
	else if(pontos_lia > pontos_ca){
		out("Lia");
	}
	else if(pontos_lia < pontos_ca){
		out("Carolina");
	}
}
