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
	int m, n, v;
	cin >> m >> n >> v;
	int mat[m][m];

	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
			if(mat[i][j] == n){
				mat[i][j] = v;
			}
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
