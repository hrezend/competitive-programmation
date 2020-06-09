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
	int a1, d1, a2, d2;
	bool j1 = false;
	bool j2 = false;

	cin >> a1 >> d1 >> a2 >> d2;

	if(d1 != a2){
		j1 = true;
	}
	if(a1 != d2){
		j2 = true;
	}

	if(!j1 && j2){
		out("1");
	}
	else if(!j2 && j1){
		out("2");
	}
	else{
		out("-1");
	}
}
