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
	int m, n, count_costas = 0;
	char campo[1005][1005];

	cin >> m >> n;

	for(int i = 0; i < m+2; i++){
		for(int j = 0; j < n+2; j++){
			campo[i][j] = '.';
		}
	}

	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> campo[i][j];
		}
	}

	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(campo[i][j] == '#'){
				if(campo[i-1][j] == '.' || campo[i][j-1] == '.' || campo[i+1][j] == '.' || campo[i][j+1] == '.'){
					count_costas++;
				}
			}
		}
	}

	out(count_costas);
}
