//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;

	string Linha;
	getline (cin, Linha);

	int Tamanho = Linha.length();

	if(Tamanho > 80){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}

}
