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

	int N = 10;
	int V[N];
	int Search;

	for(int i = 0; i < N; i++){
		cin >> V[i];
	}
	
	sort(V, V+N);
	
	cin >> Search;	

	if(binary_search(V, V+N, Search)){
		cout << "SIM" << endl;
	}
	else{
		cout << "NAO" << endl;
	}
}
