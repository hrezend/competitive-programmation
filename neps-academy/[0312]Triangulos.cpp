//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a+b <= c || a+c <= b || c+b <= a){
		cout << "n" << endl;
	}
	else if(a*a == (b*b + c*c) || b*b == (c*c + a*a) || c*c == (a*a + b*b)){
		cout << "r" << endl;
	}
	else if(a*a > (b*b + c*c) || b*b > (c*c + a*a) || c*c > (a*a + b*b)){
		cout << "o" << endl;
	}
	else{
		cout << "a" << endl;
	}
}

int main(){
  desync;
  solve();
}