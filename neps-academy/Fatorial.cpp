//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	int F = 1;
	int N;
	cin >> N;
	
	for(int i = N; i >= 1; i--){
		F *= i;
	}

	cout << F << endl;
}
