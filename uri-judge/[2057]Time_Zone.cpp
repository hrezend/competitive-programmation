//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	desync

	int S, T, F;
	cin >> S >> T >> F;
	if(S == 0){
		S = 24;
	}	
	int Hora = S+T+F;
	int Resto = Hora-24;
	if(Hora < 24){
		cout << Hora << endl;
	}
	else{
		cout << Resto << endl;
	}
}

