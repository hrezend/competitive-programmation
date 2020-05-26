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
	int n = 4;
	int v[n];
	bool imp = false;
	
	for(int i = 0; i < n; i ++){
		cin >> v[i];
	}

	sort(v, v+n);

	for(int i = 0; i+2 < 4; i++){
		if(v[i+2] < v[i]+v[i+1]){
			imp = true;
		}
	}

	if(imp){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
}
