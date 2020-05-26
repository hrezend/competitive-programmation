//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define imp(x) cout << x << endl

using namespace std;

int main(){
	desync;
	int n;
	cin >> n;
	int v[n];
	v[0] = 0;
	v[1] = 1;

	for(int i = 2; i < n; i++){
		v[i] = v[i-1] + v[i-2];
	}
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}

	cout << endl;	
}
