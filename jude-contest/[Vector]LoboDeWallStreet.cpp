//Author: Hrz - 2ºSM/CC
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	desync
	int N, C;
	cin >> N >> C;
	int L[N+1]={0};

	int I, F;
	
	for(int i = 1; i < N+1; i++){
		cin >> L[i];
		L[i] += L[i-1];
	}
	for(int j = 0; j < C; j++){
		cin >> I >> F;
		
		cout << L[F] - L[I-1] << endl;
	}

}
