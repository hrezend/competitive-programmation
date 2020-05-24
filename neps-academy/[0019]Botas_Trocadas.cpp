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

	vector <pair <int, char>> botas, clone;
	char inputP;
	int n, inputT, count = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> inputT >> inputP;
		botas.pb(mkp(inputT, inputP));
		clone.pb(mkp(inputT, inputP));
	}

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){		
			if(botas[i].first == clone[j].first){
				if(botas[i].second == 'E' && clone[j].second == 'D'){
					count++;
					clone[j].second = '-';
					break;
				}
				else if(botas[i].second == 'D' && clone[j].second == 'E'){
					count++;
					clone[j].second = '-';
					break;
				}
			}
		}
	}

	cout << count << endl;

}

