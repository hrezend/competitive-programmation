//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	
	int R1, R2;
	int Casos;
	cin >> Casos;

	for(int i = 0; i < Casos; i++){
		cin >> R1 >> R2;
		
		cout << R1+R2 << endl;
	}
}
