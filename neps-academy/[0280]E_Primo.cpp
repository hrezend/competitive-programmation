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

bool eh_primo(long long int n){
	if(n == 1){
		return 0;
	}
  	for(long long int i = 2; i*i <= n; ++i){
    	if(n % i == 0){
      		return 0;
    	}
  	}
  	return 1;
}  

int main(){
	desync;
	long long int num;
	
	cin >> num;

	if(eh_primo(num)){
		out("S");
	}
	else{
		out("N");
	}
}
