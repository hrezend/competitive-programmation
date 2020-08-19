//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b));
}

void solve(){
	int n, input, answer;
	cin >> n;
	
	n--;
	cin >> answer;
	while(n--){
		cin >> input;
		answer = mdc(input, answer);
	}
	cout << answer << endl;
}

int main(){
  desync;
  solve();
}