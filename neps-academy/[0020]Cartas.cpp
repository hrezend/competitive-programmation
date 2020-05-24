//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

int main(){

	desync;
	int A, B, C, D;
	cin >> A >> B >> C;
	
	if(A == C){
		cout << B << endl;
	}
	else if(A == B){
		cout << C << endl;
	}
	else if(C == B){
		cout << A << endl;
	}


}
