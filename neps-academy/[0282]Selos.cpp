//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

bool eh_primo(long long x){
  if(x == 1)  return 0;
  for(long long i = 2; i*i <= x; ++i){
    if(x % i == 0){
      return 0;
    }
  }
  return 1;
}  

void solve(){
	bool answer = false;
	long long n;
	cin >> n;
	
	answer = eh_primo(n);
	if(n == 1 || answer){
		out("N");
	}
	else{
		out("S");
	}
}

int main(){
  desync;
  solve();
}