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
	bool flag = false; 
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if(n1 == n2 || n1 == n3 || n2 == n3){
		flag = true;
	}
	else if(n1+n2 == n3 || n1+n3 == n2 || n2+n3 == n1){
		flag = true;
	}

	if(flag){
		out("S");
	}
	else{
		out("N");
	}
}
