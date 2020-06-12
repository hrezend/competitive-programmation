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
	int sub = 0, ref = 0;
	int n, input;

	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> input;
		if(input < 50){
			sub++;
		}
		else if(input >= 50 && input < 85){
			ref++;
		}
	}

	cout << sub << " " << ref << endl;
}
