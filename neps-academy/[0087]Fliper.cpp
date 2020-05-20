//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int P, R;
	cin >> P >> R;

	if(P == 1){
		if(R ==1){
			cout << "A" << endl;
		}
		else{
			cout << "B" << endl;
		}
	}
	else{
		cout << "C" << endl;
	}
	  
}
