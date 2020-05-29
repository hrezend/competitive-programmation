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
	vector <int> bin;
	int n;
	cin >> n;

	for(;;){
		bin.pb(n%2);
		n = n/2;
		if(n == 0){
			break;
		}
	}

	for(int i = bin.size()-1; i >= 0; i--){
		cout << bin[i];
	}
	cout << endl;
}
