//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Casos, N;
	cin >> Casos;

	for(int i = 0; i < Casos; i++){
		cin >> N;
		if(N % 2 == 0 ){
			cout << 0 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}

}
