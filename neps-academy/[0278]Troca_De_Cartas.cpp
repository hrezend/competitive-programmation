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
	set <int> ali_set;
	set <int> bea_set;
	int a, b, in_a, in_b;
	int qtd_trocavel_a = 0, qtd_trocavel_b = 0;

	cin >> a >> b;

	for(int i = 0; i < a; i++){
		cin >> in_a;		
		ali_set.insert(in_a);
	}

	for(int i = 0; i < b; i++){
		cin >> in_b;		
		bea_set.insert(in_b);
	}

	for(auto i = ali_set.begin() ; i != ali_set.end(); i++){
		if(!bea_set.count(*i)){
        	qtd_trocavel_a++;
		}
    }

	for(auto i = bea_set.begin() ; i != bea_set.end(); i++){
		if(!ali_set.count(*i)){
        	qtd_trocavel_b++;
		}
    }

	out(min(qtd_trocavel_a, qtd_trocavel_b));
}
