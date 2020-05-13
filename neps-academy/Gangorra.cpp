//Author: Herson Rezende - 2ºSM de CC - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int P1, C1, P2, C2;
	cin >> P1 >> C1 >> P2 >> C2;
	
	if((P1*C1) == (P2*C2)){
		cout << "0" << endl;
	}
	else if((P1*C1) > (P2*C2)){
		cout << "-1" << endl;
	}
	else{
		cout << "1" << endl;
	}
}
