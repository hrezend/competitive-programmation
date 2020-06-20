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
	int l1, l2, l3;
	bool eh_triangulo = false;
	int tipo_triangulo = 0;
	cin >> l1 >> l2 >> l3;

	if(l1 < l2+l3 && l2 < l1+l3 && l3 < l1+l2){
		eh_triangulo = true;	
	}

	if(l1 == l2 && l2 == l3){
		tipo_triangulo = 3;
	}
	else if(l1 != l2 && l2 != l3){
		tipo_triangulo = 2;
	}
	else{
		tipo_triangulo = 1;
	}


	if(eh_triangulo){
		out("S");
		out(tipo_triangulo);
	}
	else{
		out("N");
	}
}
