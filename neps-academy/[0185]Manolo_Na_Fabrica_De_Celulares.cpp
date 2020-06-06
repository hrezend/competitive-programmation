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
	int modelos[3] = {0};
	int pecas[5] = {0};
	int n, peca;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> peca;
		pecas[peca-1]++;
		
		if(pecas[0] >= 1 && pecas[2] >= 1 && pecas[4] >= 1){
			modelos[0]++;
			pecas[0]--;
			pecas[2]--;
			pecas[4]--;
		}
		if(pecas[0] >= 1 && pecas[3] >= 1){
			modelos[1]++;
			pecas[0]--;
			pecas[3]--;
		}
		if(pecas[1] >= 1 && pecas[3] >= 1){
			modelos[2]++;
			pecas[1]--;
			pecas[3]--;
		}
	}

	cout << "A: " << modelos[0] << endl;
	cout << "B: " << modelos[1] << endl;
	cout << "C: " << modelos[2] << endl;
}
