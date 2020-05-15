//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	double A, B, Potencia;
	cin >> A >> B;
	Potencia = pow(A, B);
	
	cout << fixed << setprecision(4) << Potencia << endl;
}
