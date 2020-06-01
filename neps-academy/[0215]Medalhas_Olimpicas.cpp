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
	int n = 3;
	int a[n];
	int b[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}

	if(a[0] > b[0]){
		out("A");
	}
	else if(a[0] < b[0]){
		out("B");
	}	
	else if(a[0] == b[0]){
		if(a[1] > b[1]){
			out("A");
		}
		else if(a[1] < b[1]){
			out("B");
		}
		else if(a[1] == b[1]){
			if(a[2] > b[2]){
				out("A");
			}
			else{
				out("B");
			}
		}
	}
}
