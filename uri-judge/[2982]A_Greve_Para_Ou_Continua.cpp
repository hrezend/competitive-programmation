//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	
	char Possibilidades;
	int Valor, Gasto = 0, Verba = 0;
	int Casos;
	cin >> Casos;

	for(int i = 0; i < Casos; i++){
		cin >> Possibilidades >> Valor;
		if(Possibilidades == 'G'){
			Gasto += Valor;
		}
		else if(Possibilidades == 'V'){
			Verba += Valor;
		}
	}
	if(Verba >= Gasto){
		cout << "A greve vai parar." << endl;
	}
	else{
		cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
	}

}
