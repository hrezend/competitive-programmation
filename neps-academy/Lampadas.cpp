//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int A = 0, B = 0, Input;
	int N;
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> Input;
		
		if(Input == 1){
			if(A == 0){
				A = 1;
			}
			else{
				A = 0;
			}
		}
		else if(Input == 2){
			if(B == 0){
				B = 1;
			}
			else{
				B = 0;		
			}
			if(A == 0){
				A = 1;
			}
			else{
				A = 0;
			}
		}
	}

	cout << A << endl;
	cout << B << endl;
}
