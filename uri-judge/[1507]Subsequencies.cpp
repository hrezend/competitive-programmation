//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int Casos, Queries;
	string Sequencia, Sub;
	int Imprime, Auxiliar;

	cin >> Casos;

	for(int i = 0; i < Casos; i++){
		cin >> Sequencia;
		cin >> Queries;

		for(int j = 0; j < Queries; j++){
			cin >> Sub;
			Auxiliar = 0;
			Imprime = 0;

			for(char L: Sequencia){
				if(L == Sub[Auxiliar] && ++Auxiliar == Sub.length()){
					Imprime = 1;
					break;
				}
			}

			if(Imprime == 1){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}

		}
	}

}
