//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int n, input;
	cin >> n;
	vector <int> num;
	
	for(int i = 0; i < n; i++){
		cin >> input;
    num.push_back(input);
	}

	sort(num.rbegin(), num.rend());
	for(int i = 0; i < n; i++){
		cout << num[i] << " ";
	}
	cout << endl;
}

int main(){
  desync;
  solve();
}