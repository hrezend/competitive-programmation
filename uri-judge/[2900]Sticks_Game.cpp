//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int n;
	cin >> n;
	
	while(n != 0){
		int count = 0;
		int comprimento, quantidade;
		for(int i = 0; i < n; i++){
			cin >> comprimento >> quantidade;
			if(quantidade % 2 != 0){
				count += (quantidade-1);
			}
			else{
				count += quantidade;
			}
		}
		cout << count/4 << endl;
		cin >> n;
	}
	cout << endl;
}

int main(){
  desync;
  solve();
}