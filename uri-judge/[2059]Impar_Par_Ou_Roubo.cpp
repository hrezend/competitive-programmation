//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	
	int P, J1, J2, R, A;

	cin >> P >> J1 >> J2 >> R >> A;
	
	if(A == 1 && R == 0){
		cout << "Jogador 1 ganha!" << endl;
	}
	else if(P == 1 && A == 0 && R == 1){
		cout << "Jogador 1 ganha!" << endl;
	}
	else if(P == 1 && A == 1 && R == 1){
		cout << "Jogador 2 ganha!" << endl;
	}
	else if(P == 0 && A == 0 && R == 1){
		cout << "Jogador 1 ganha!" << endl;
	}
	else if(P == 0 && A == 1 && R == 1){
		cout << "Jogador 2 ganha!" << endl;
	}
	else if(P == 1 && A == 0 && R == 0){
		if((J1+J2) % 2 == 0){
			cout << "Jogador 1 ganha!" << endl;
		}
		else if((J1+J2) % 2 != 0){
			cout << "Jogador 2 ganha!" << endl;
		}
	}
	else if(P == 0 && A == 0 && R == 0){
		if((J1+J2) % 2 != 0){
			cout << "Jogador 1 ganha!" << endl;
		}
		else if((J1+J2) % 2 == 0){
			cout << "Jogador 2 ganha!" << endl;
		}
	}

	
}
