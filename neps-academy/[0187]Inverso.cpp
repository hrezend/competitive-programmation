//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){	
	desync;

	int N[10];

	for(int i = 0; i < 10; i++){
		cin >> N[i];
	}

	for(int i = 9; i >= 0; i--){
		cout << N[i] << endl;
	}
}

