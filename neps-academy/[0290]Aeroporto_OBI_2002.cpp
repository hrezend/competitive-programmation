//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector <int> adj[10001];
vector <int> answer;

void dfs(int qtd_av){
	int maior = 0;
	for(int i = 1; i <= qtd_av; i++){
		if(adj[i].size() > maior){
			maior = adj[i].size();
		}
	}
	for(int i = 1; i <= qtd_av; i++){
		if(adj[i].size() == maior){
			answer.push_back(i);
		}
	}
}

void solve(){
	int a, b, teste = 0;
	int qtd_av, qtd_voos;
	cin >> qtd_av >> qtd_voos;
	
	while(qtd_av != 0 && qtd_voos != 0){
		for(int i = 0; i < qtd_voos; i++){
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
		dfs(qtd_av);
		
		cout << "Teste " << ++teste << endl;
		for(int i = 0; i < answer.size(); i++){
			cout << answer[i] << " ";
		}
		cout << endl;
		
		for(int i = 1; i <= qtd_av; i++){
			adj[i].clear();
		}
		answer.clear();
		cin >> qtd_av >> qtd_voos;
	}
}

int main(){
  desync;
  solve();
}