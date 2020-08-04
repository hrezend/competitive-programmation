//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int n;
	while(cin >> n){
		int count = 0;
		int prem[n];
		int tr[n];
		bool find = false;
		for(int i = 0; i < n-1; i++){
			cin >> prem[i] >> tr[i];
		}
		
		for(int i = 0; i < n-1; i++){
			if(prem[i] == n){
				find = true;
                if(tr[i] == 0){
                    count++;
                }
                continue;
			}
			if(find && tr[i] == 1){
				count++;
			}
		}
		
		cout << count << endl;
	}
}

int main(){
  desync;
  solve();
}