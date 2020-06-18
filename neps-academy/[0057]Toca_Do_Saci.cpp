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
#define max_tam 1001
using namespace std; 

int n, m;
int toca[max_tam][max_tam];
int dist[max_tam][max_tam];
int q[] = {0, 0, 1, -1};
int w[] = {1, -1, 0, 0};

void dfs(int x, int y){
    for (int z = 0; z < 4; z++){
        int next_x = x + q[z];
        int next_j = y + w[z];
        if (next_x >= 0 && next_x < n && next_j >= 0 && next_j < m && dist[next_x][next_j] == -1 && toca[next_x][next_j] != 0){
            dist[next_x][next_j] = dist[x][y] + 1;
            dfs(next_x, next_j);
        }
    }
}

int main(){
	desync;
	int saida_n, saida_m, local_n, local_m;
	cin >> n >> m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> toca[i][j];
			if(toca[i][j] == 3){
				saida_n = i;
				saida_m = j;
			}
			if(toca[i][j] == 2){
				local_n = i;
				local_m = j;
			}
			dist[i][j] = -1;
		}
	}
	
	dist[local_n][local_m] = 1;
	dfs(local_n, local_m);
	int count_salas = dist[saida_n][saida_m];

	out(count_salas);
}
