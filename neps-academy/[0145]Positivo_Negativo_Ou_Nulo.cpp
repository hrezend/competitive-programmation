//Author: Herson Rezende - 2ºSM de CC - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int Number;
	cin >> Number;

	if(Number == 0){
		cout << "nulo" << endl;
	}
	else if(Number < 0){
		cout << "negativo" << endl;
	}
	else if(Number > 0){
		cout << "positivo" << endl;
	}

}
