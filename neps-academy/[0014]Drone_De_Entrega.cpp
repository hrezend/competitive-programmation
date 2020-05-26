//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << "debug: " << x << endl
#define lng(x) x.length()
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define mkp(x,y) (make_pair(x,y))

using namespace std;

int main(){

	desync;
	int a, b, c, h, l;
	cin >> a >> b >> c >> h >> l;

	if(a <= h && b <= l || a <= l && b <= h){
		cout << "S" << endl;
	}
	else if(a <= h && c <= l || a <= l && c <= h){
		cout << "S" << endl;
	}
	else if(b <= h && c <= l || c <= h && b <= l){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}	

}
