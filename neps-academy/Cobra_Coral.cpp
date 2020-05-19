//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int N1, N2, N3, N4;
	cin >> N1 >> N2 >> N3 >> N4;

	if(N1 == N4){
		cout << "F" << endl;
	}
	else{
		cout << "V" << endl;
	}
}
