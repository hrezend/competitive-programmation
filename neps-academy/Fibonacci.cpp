//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int fib(int N){
	if(N == 1){
		return 1;
	}
	if(N == 2){
		return 2;
	}
	return fib((N-1))+fib((N-2));
}


int main(){
	desync;
	
	int N;
	cin >> N;
	
	if(N != 0){
		int Res = fib(N);
		cout << Res << endl;
	}
	else{
		cout << "1" << endl;
	}
}
