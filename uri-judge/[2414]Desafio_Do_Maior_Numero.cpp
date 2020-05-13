//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Maior = 0;
	int Num;
	cin >> Num;

	while(Num != 0){
		if(Num > Maior){
			Maior = Num;
		}
		cin >> Num;
	}

	cout << Maior << endl;
}
