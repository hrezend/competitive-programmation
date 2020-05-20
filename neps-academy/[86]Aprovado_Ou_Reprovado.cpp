//Author: Herson Rezende - 2ºSM de CC - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int A, B;
	cin >> A >> B;

	if((A+B)/2 >= 7){
		cout << "Aprovado" << endl;
	}
	else if((A+B)/2 >= 4 && (A+B)/2 < 7){
		cout << "Recuperacao" << endl;
	}
	else if((A+B)/2 < 4){
		cout << "Reprovado" << endl;
	}

}
