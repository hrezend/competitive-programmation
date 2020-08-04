//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

//Variáveis Globais
vector <int> adj[100001];
bool flag = true;

//Função DFS
int dfs(int pos){
	int qtd = 1;
	int aux = -1;
	for(int i = 0; i < adj[pos].size(); i++){
		if(aux == -1){
			aux = dfs(adj[pos][i]);
			qtd += aux;
		}
		else if(aux == dfs(adj[pos][i])){
			qtd += aux;
		}
		else{
			flag = false;
		}
	}
	return qtd;
}

//Função com a resolução da questão
void solve(){
	int n, n1, n2;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> n1 >> n2;
		adj[n2].pb(n1);
	}
	dfs(0);
	if(flag){
		out("bem");
	}
	else{
		out("mal");
	}
}

//Função Main
int main(){
  desync;
  solve();
}