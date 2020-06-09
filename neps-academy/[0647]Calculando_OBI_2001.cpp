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
	int n, input;
	cin >> n;
	int count = 1;
	int soma = 0;

	while(n != 0){
		for(int i = 0; i < n; i++){
			cin >> input;
			soma+= input;
		}

		cout << "Teste " << count << endl;
		cout << soma << endl;
		cout << endl;
		soma = 0;
		count++;
		cin >> n;
	}

}
