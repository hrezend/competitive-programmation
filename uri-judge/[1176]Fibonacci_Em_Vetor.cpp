//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	
	desync; 

	long long int Sequence[61];
	int N, T;
	cin >> T;
	
	Sequence[0] = 0;
	Sequence[1] = 1;
	for(int i = 2; i <= 60; i++){
		Sequence[i] = Sequence[i-1]+Sequence[i-2];
	}	
	
	for(int i = 0; i < T; i++){
		cin >> N;	
		cout << "Fib(" << N << ") = " << Sequence[N] << endl;
	}
}
