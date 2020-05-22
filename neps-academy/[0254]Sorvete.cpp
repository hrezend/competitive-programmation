//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define lng(x) (string)x.length()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define st(x) (x.first)
#define nd(x) (x.second)
#define mkp(x,y) (make_pair(x,y))

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

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
	
	i_int = st(sorveteiros[0]);
	for(int i = 0; i < qtd_sorveteiros; i++){
		if(st(sorveteiros[i+1]) <= nd(sorveteiros[i])){
			f_int = nd(sorveteiros[i]);
			intervalos.pb(mkp(i_int,f_int));
			i_int = st(sorveteiros[i+1]);
		}
		if(i == qtd_sorveteiros){
			f_int = nd(sorveteiros[i-1]);
			intervalos.pb(mkp(i_int,f_int));
			break;
		}
	}

	for(int i = 0; i < sz(intervalos); i++){
		cout << st(intervalos[i]) << " " << nd(intervalos[i]) << endl;
	}
}
