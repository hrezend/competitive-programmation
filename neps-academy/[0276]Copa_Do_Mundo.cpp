//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
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
	queue <char> grupos;
	int j1, j2;

	for(int i = 65; i <= 80; i++){
		grupos.push(i);
	}

	for(int i = 1; i <= 15; i++){
		cin >> j1 >> j2;
		if(j1 > j2){
			grupos.push(front(grupos));
			pop(grupos);
			pop(grupos);
		}
		if(j2 > j1){
			pop(grupos);
			grupos.push(front(grupos));
			pop(grupos);
		}
	}

	cout << front(grupos) << endl;
}
