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
	int n, i, f, count = 0;
	cin >> n >> i >> f;
	int v[n];
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	sort(v, v+n);

	for(int k = 0; k < n-1; k++){
		for(int j = k+1; j < n; j++){
			if(v[k]+v[j] >= i && v[k]+v[j] <= f){
				count++;
			} 
		}
	}
	
	out(count);
}
