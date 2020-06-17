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
	set <long long> ilhas[100005];
	long long n, m, a, b, t;

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		cin >> t >> a >> b;
		if(t == 1){
			ilhas[a].insert(b);
			ilhas[b].insert(a);
		}
		else{
			if(ilhas[a].find(b) != ilhas[a].end()){
				out(1);
			}
			else{
				out(0);
			}
		}
	}
}
