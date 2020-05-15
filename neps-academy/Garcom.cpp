//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int L, C, Count = 0;
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> L >> C;
		if(L > C){
			Count += C;
		}
	}

	cout << Count << endl;
}
