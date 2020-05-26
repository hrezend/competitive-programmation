//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl

using namespace std;

int main(){
    desync;

	int tamanho, soma = 0;
	string input;
	cin >> input;
	tamanho = input.length();

	for(int i = 0; i < tamanho; i++){
		if(input[i] == '0') soma += 0;
		if(input[i] == '1') soma += 1;
		if(input[i] == '2') soma += 2;
		if(input[i] == '3') soma += 3;
		if(input[i] == '4') soma += 4;
		if(input[i] == '5') soma += 5;
		if(input[i] == '6') soma += 6;
		if(input[i] == '7') soma += 7;
		if(input[i] == '8') soma += 8;
		if(input[i] == '9') soma += 9;
	}

	if(input[tamanho-1] == '0' || input[tamanho-1] == '2' || input[tamanho-1] == '4' || input[tamanho-1] == '6' || input[tamanho-1] == '8'){
		out("S");
	}
	else{
		out("N");
	}
	if(soma % 3 == 0){
		out("S");
	}
	else{
		out("N");
	}
	if(input[tamanho-1] == '5' || input[tamanho-1] == '0'){
		out("S");
	}
	else{
		out("N");
	}
}
