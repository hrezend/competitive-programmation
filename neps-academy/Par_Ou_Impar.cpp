//Author: Herson Rezende - 2ºSM de CC - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int Bino, Cino;
	cin >> Bino >> Cino;
	
	if((Bino+Cino) % 2 != 0){
		cout << "Cino" << endl;
	}
	else{
		cout << "Bino" << endl;
	}
}
