//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define lng(x) x.length()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define st(x) (x.first)
#define nd(x) (x.second)
#define mkp(x,y) (make_pair(x,y))

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){

	desync;
	
	string Input;
	cin >> Input;

	for(int i = 0; i < lng(Input); i++){
		if(Input[i] == 'A' || Input[i] == 'B' || Input[i] == 'C'){
			Input[i] = '2';
		}
		if(Input[i] == 'D' || Input[i] == 'E' || Input[i] == 'F'){
			Input[i] = '3';
		}
		if(Input[i] == 'G' || Input[i] == 'H' || Input[i] == 'I'){
			Input[i] = '4';
		}
		if(Input[i] == 'J' || Input[i] == 'K' || Input[i] == 'L'){
			Input[i] = '5';
		}
		if(Input[i] == 'M' || Input[i] == 'N' || Input[i] == 'O'){
			Input[i] = '6';
		}
		if(Input[i] == 'P' || Input[i] == 'Q' || Input[i] == 'R' || Input[i] == 'S'){
			Input[i] = '7';
		}
		if(Input[i] == 'T' || Input[i] == 'U' || Input[i] == 'V'){
			Input[i] = '8';
		}
		if(Input[i] == 'W' || Input[i] == 'X' || Input[i] == 'Y' || Input[i] == 'Z'){
			Input[i] = '9';
		}
	}

	cout << Input << endl;
}
