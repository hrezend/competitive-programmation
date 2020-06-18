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

vector <int> adjac[101];
int dist[101];
int max_dist = INT_MIN;
int clk, res;

void dfs(int v){
	for(int x: adjac[v]){
		if(dist[x] != -1){
			continue;
		}
		dist[x] = dist[v] + 1;
		dfs(x);
	}
	if(dist[v] > max_dist){
		max_dist = dist[v];
	}
}

int main(){
	desync;
	int n, a, b;
	cin >> n;

	while(n != 0){
		for(int i = 0; i < n-1; i++){
			cin >> a >> b;
			adjac[a].pb(b);
			adjac[b].pb(a);
		}
		int last_dist = INT_MAX;
		for(int i = 1; i <= n; i++){
			max_dist = INT_MIN;
			for(int j = 1; j <= n; j++){
				dist[j] = -1;
			}
			dist[i] = 0;
			dfs(i);
			if(max_dist < last_dist){
				last_dist = max_dist;
				res = i;
			}
		}

		for(int i = 1; i <= n; i++){
			adjac[i].clear();
		}

		cout << "Teste " << ++clk << endl;
		cout << res << endl;
		cout << endl;
		cin >> n;
	}
}
