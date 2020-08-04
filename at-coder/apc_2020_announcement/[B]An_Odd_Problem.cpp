//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
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
	int n, count = 0;
	cin >> n;
	int v[n+1];
	
	for(int i = 1; i <= n; i++){
		cin >> v[i];
		if(v[i] % 2 == 0){
			continue;
		}
		if(i % 2 != 0 && v[i] % 2 != 0){
		    count++;   
		}
	}
	out(count);
}
