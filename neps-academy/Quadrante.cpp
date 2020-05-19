//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	int X, Y;
	cin >> X >> Y;
	
	if(X == 0 || Y == 0){
		cout << "eixos" << endl;
	}
	else if(X > 0 && Y > 0){
		cout << "Q1" << endl;
	}
	else if(X < 0 && Y < 0){
		cout << "Q3" << endl;
	}
	else if(X < 0 && Y > 0){
		cout << "Q2" << endl;
	}
	else if(X > 0 && Y < 0){
		cout << "Q4" << endl;
	}
}
