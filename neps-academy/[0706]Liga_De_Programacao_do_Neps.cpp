//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

int main(){

	desync;
	int comeco;
	cin >> comeco;

	int dormir = comeco-9;

	if(dormir == 0){
		cout << "0" << endl;
	}
	else if(dormir > 0){
		cout << dormir << endl;
	}
	else{
		cout << 24+dormir << endl;
	}


}
