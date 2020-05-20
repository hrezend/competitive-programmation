//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool eh_primo(int x){
	int Contador = 0;
	for(int i = 1; i <= x; i++){
		if(x%i == 0){
			Contador++;
		}
	}
	if(Contador == 2){
		return true;
	}
	return false;
}

int main(){
	desync;
	
	int x;
	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

