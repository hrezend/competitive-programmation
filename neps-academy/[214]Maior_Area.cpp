//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	int L1, A1, L2, A2;
	cin >> L1 >> A1 >> L2 >> A2;

	if((L1*A1) == (L2*A2)){
		cout << "Empate" << endl;
	}
	else if((L1*A1) > (L2*A2)){
		cout << "Primeiro" << endl;
	}
	else if((L1*A1) < (L2*A2)){
		cout << "Segundo" << endl;
	}
}
