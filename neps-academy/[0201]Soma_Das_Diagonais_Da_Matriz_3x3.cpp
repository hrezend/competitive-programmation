//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;
	
	int Matriz[3][3];
	int DP = 0, DS = 0;
	int aux = 2;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> Matriz[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = i; j <= i; j++){
			DP += Matriz[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = aux; j <= aux; j++){
			DS += Matriz[i][j];
			aux--;
		}
	}

	cout << "Diagonal principal: "<< DP << endl;
	cout << "Diagonal secundaria: "<< DS << endl;
}
