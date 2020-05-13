//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){

	char Z, G;
	cin >> Z >> G;
	char D, C;
	cin >> D >> C;	

	if(Z != D){
		cout << "Bloqueado" << endl;
	}
	else{
		cout << "Driblado" << endl;
		if(C != G){
			cout << "...e o goleiro pega" << endl;
		}
		else{
			cout << "Gol" << endl;
		}
	}

}

