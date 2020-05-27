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
	set <int> tacos;
	int n, input;
	int estoque = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;
		if(tacos.count(input)){	
			tacos.erase(input);
		}
		else{
			tacos.insert(input);
			estoque++;
		}
	}

	out(estoque*2);
}
