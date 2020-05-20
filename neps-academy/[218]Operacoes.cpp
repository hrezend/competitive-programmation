//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	char Operacao;
	double A, B;
	
	cin >> Operacao >> A >> B;	

	if(Operacao == 'D'){
		cout << fixed << setprecision(2) << A/B << endl;
	}
	else if(Operacao == 'M'){
		cout << fixed << setprecision(2) << A*B << endl;
	}
}
