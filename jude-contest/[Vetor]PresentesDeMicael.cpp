//Author: Hrz - 2ºSM/CC
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	desync
	int N;
	cin >> N;
	int L[N];
	int Total = 0;
	
	for(int i = 0; i < N; i++){
		cin >> L[i];
		Total += L[i];
	}
	for(int j = 0; j < N; j++){
		if(L[j] >= (Total/N)){
			cout << L[j] << ": Sim!" << endl;
		}		
		else{
			cout << L[j] << ": Nao!" << endl;
		}	
	}

}
