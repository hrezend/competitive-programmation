//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int P, D1, D2;
	cin >> P >> D1 >> D2;

	if(P == 0){
		if((D1+D2) % 2 == 0){
			cout << "0" << endl;
		}
		else{
			cout << "1" << endl;
		}
	}
	else if(P == 1){
		if((D1+D2) % 2 == 0){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}
