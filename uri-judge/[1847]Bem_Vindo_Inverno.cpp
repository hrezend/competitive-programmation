//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int T1, T2, T3;
	bool Condicao = false;

	cin >> T1 >> T2 >> T3;

	if(T2 < T1 && T3 >= T2){
		Condicao = true;
	}
	else if(T2 > T1 && T3 > T2 && T3-T2 >= T2-T1){
		Condicao = true;
	}
	else if(T1 > T2 && T2 > T3 && T2-T3 < T1-T2){
		Condicao = true;
	}
	else if(T1 == T2 && T3 > T2){
		Condicao = true;
	} 
	
	if(Condicao){
		cout << ":)" << endl;
	}
	else{
		cout << ":(" << endl;
	}

}
