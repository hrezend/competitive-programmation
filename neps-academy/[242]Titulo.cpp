//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;


string title(string F){
	string Return;

	if(F[0] > 96){
		Return += F[0] - 32;
	}
	else{
		Return += F[0];
	}
	for(int i = 1; i < F.length(); i++){
		if(F[i] > 64 && F[i] < 91){
			Return += F[i] + 32;
		}
		else{
			Return += F[i];
		}		
	}

	for(int i = 1; i < Return.length(); i++){
		if(Return[i] < 123 && Return[i] > 96 && Return[i-1] == 32){
			Return[i] = Return[i]-32;
		}
	}

	return Return;
}

int main(){
	desync;

	string F;
	getline(cin, F);

	cout << title(F) << endl;
}
