//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define lng(x) x.length()
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define mkp(x,y) (make_pair(x,y))

using namespace std;

int main(){

	desync;
	vector <pair<int, int>> sorveteiros;
	vector <pair<int, int>> intervalos;
	int comprimento, qtd_sorveteiros;
	int inicio, fim, i_int, f_int;

	cin >> comprimento >> qtd_sorveteiros;
	
	for(int i = 0; i < qtd_sorveteiros; i++){
		cin >> inicio >> fim;
		sorveteiros.pb(mkp(inicio, fim));
	}

	sort all(sorveteiros);	

	intervalos.pb(sorveteiros[0]);
	for(int i = 1; i < qtd_sorveteiros; i++){
		if(sorveteiros[i].first <= intervalos[sz(intervalos)-1].second){
			if(sorveteiros[i].second > intervalos[sz(intervalos)-1].second){
				intervalos[sz(intervalos)-1].second = sorveteiros[i].second;
			}
		}
		else{
			intervalos.pb(sorveteiros[i]);
		}
	}

	for(int i = 0; i < sz(intervalos); i++){
		cout << intervalos[i].first << " " << intervalos[i].second << endl;
	}
}
