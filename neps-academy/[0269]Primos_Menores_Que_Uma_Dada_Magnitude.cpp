//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

bool eh_primo(int x){
    if(x == 1){
        return 0;
    }
    for(int i = 2; i*i <= x; ++i){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}

void solve(){
	bool flag;
	int n;
	cin >> n;
	
	for(int i = 2; i <= n; i++){
	    flag = eh_primo(i);
		if(flag){
		    cout << i << " ";    
		}
	}
}

int main(){
  desync;
  solve();
}