//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int E, D;
	cin >> E >> D;
	
	if(E > D){
		cout << "Eu odeio a professora!" << endl;
	}
	else if(D-E > 2){
		cout << "Muito bem! Apresenta antes do Natal!" << endl;
	}
	else if(D-E < 3){
		cout << "Parece o trabalho do meu filho!" << endl;
		E+= 2;
		if(E >= 24){
			cout << "Fail! Entao eh nataaaaal!" << endl;
		}
		else{
			cout << "TCC Apresentado!" << endl;
		}
	}
}
