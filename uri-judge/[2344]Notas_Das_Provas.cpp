//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Nota;
	cin >> Nota;

	if(Nota == 0){
		cout << "F" << endl;
	}
	else if(Nota > 0 && Nota < 36){
		cout << "D" << endl;
	}
	else if(Nota > 35 && Nota < 61){
		cout << "C" << endl;
	}
	else if(Nota > 60 && Nota < 86){
		cout << "B" << endl;
	}
	else if(Nota > 85 && Nota < 101){
		cout << "A" << endl;
	}
	


}
