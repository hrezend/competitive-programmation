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
	vector <int> v;
	int qtd_comp, qtd_podio, input, count = 0;

	cin >> qtd_comp >> qtd_podio;
	
	for(int i = 0; i < qtd_comp; i++){
		cin >> input;
		v.pb(input);	
	}

	sort rall(v);

	if(v[qtd_podio-1] != v[qtd_podio]){
		out(qtd_podio);
	}
    else{
    	count = qtd_podio;
    	for(int i = qtd_podio-1; i < qtd_comp-1; i++){
    		if(v[i] != v[i+1]){
    			break;
    		}
    		count++;
    	}
		out(count);
    }

}
