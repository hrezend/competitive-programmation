//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int A, Count = 0;
	int N;
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> A;
		Count += A;
		if(Count >= 1000000){
			cout << i << endl;
			break;
		}
	}
}
