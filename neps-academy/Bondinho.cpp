//Author: Herson Rezende - 2ºSM de CC - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;

	int A, M;	
	cin >> A >> M;
	int Soma = A+M;

	if(Soma <= 50){
 		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}   
}
