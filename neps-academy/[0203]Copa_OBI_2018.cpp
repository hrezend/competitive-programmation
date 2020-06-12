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
	int pos_kun, pos_lu;
	cin >> pos_kun >> pos_lu;

	if((pos_lu-1)/2 == (pos_kun-1)/2){
		out("oitavas");
	}
	else if((pos_lu-1)/4 == (pos_kun-1)/4){
		out("quartas");
	}
	else if((pos_lu-1)/8 == (pos_kun-1)/8){
		out("semifinal");
	}	
	else{
		out("final");
	}
}
