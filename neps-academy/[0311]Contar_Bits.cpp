//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int count_bits(int x){
	int ret	= 0;
	while(x != 0){
		++ret;
		x -= x&-x;
	}
	return ret;
}

void solve(){
	long long int num, ans;
	cin >> num;
	ans = count_bits(num);
	
	cout << ans << endl;
}

int main(){
  desync;
  solve();
}