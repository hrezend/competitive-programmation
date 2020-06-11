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
	int linhas, colunas;
	int aux_l, aux_c;
	bool move = true;
	char m[101][101];
	cin >> linhas >> colunas;

	for(int i = 1; i <= linhas; i++){
		for(int j = 1; j <= colunas; j++){
			cin >> m[i][j];
			if(m[i][j] == 'o'){
				aux_l = i;
				aux_c = j;
			}
		}
	}
	
	while(move){
		move = false;
		if(m[aux_l][aux_c-1] == 'H'){
			m[aux_l][aux_c-1] = '.';
			aux_c--;
			move = true;
		}
		else if(m[aux_l-1][aux_c] == 'H'){
			m[aux_l-1][aux_c] = '.';
			aux_l--;
			move = true;
		}
		else if(m[aux_l][aux_c+1] == 'H'){
			m[aux_l][aux_c+1] = '.';
			aux_c++;
			move = true;
		}
		else if(m[aux_l+1][aux_c] == 'H'){
			m[aux_l+1][aux_c] = '.';
			aux_l++;
			move = true;
		}
	}

	cout << aux_l << " " << aux_c << endl;	
}
