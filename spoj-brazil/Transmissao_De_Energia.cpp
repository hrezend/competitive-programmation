//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

//Global Variables
vector<int>adj[101];
set<int>vis;
bool flag;

//Funcao DFS
void dfs(int v){
    vis.insert(v);
    for(int u : adj[v]){
        if(!vis.count(u)){
		    dfs(u);
		}
    }
}

//Funcao Solve
void solve(){
	int e, l, x, y, teste = 0;
	cin >> e >> l;
	
	while(e != 0 && l !=0){
		//Iniciando variaveis e preenchendo vetor de adjacencia
		teste++;
		flag = false;
		for(int i = 0; i < l; i++){
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		//Iniciando DFS e obtendo resultado
		dfs(1);
		if(vis.size() == e){
			flag = true;
		}
		cout << "Teste " << teste << endl;
		if(flag){
			out("normal");
		}
		else{
			out("falha");
		}
		cout << endl;

		//Limpando os vetores e lendo novo caso de teste
		for(int i = 1; i <= e; i++){
			adj[i].clear();
		}
		vis.clear();
		cin >> e >> l;
	}
}

int main(){
  desync;
  solve();
}