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

	int tamanho;
	string input;
	cin >> input;
	tamanho = input.length();

	//pegar o ultimo algarismo
	int ultimo = 0;
	if(input[tamanho-1] == '0') ultimo += 0;
	else if(input[tamanho-1] == '1') ultimo += 1;
	else if(input[tamanho-1] == '2') ultimo += 2;
	else if(input[tamanho-1] == '3') ultimo += 3;
	else if(input[tamanho-1] == '4') ultimo += 4;
	else if(input[tamanho-1] == '5') ultimo += 5;
	else if(input[tamanho-1] == '6') ultimo += 6;
	else if(input[tamanho-1] == '7') ultimo += 7;
	else if(input[tamanho-1] == '8') ultimo += 8;
	else if(input[tamanho-1] == '9') ultimo += 9;

	//pegar o penultimo algarismo
	int penultimo = 0;
	if(input[tamanho-2] == '0') penultimo += 0;
	else if(input[tamanho-2] == '1') penultimo += 1;
	else if(input[tamanho-2] == '2') penultimo += 2;
	else if(input[tamanho-2] == '3') penultimo += 3;
	else if(input[tamanho-2] == '4') penultimo += 4;
	else if(input[tamanho-2] == '5') penultimo += 5;
	else if(input[tamanho-2] == '6') penultimo += 6;
	else if(input[tamanho-2] == '7') penultimo += 7;
	else if(input[tamanho-2] == '8') penultimo += 8;
	else if(input[tamanho-2] == '9') penultimo += 9;

	//soma todos os algarismos
	int soma = 0;
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

	if(penultimo == 0 && ultimo == 0 || penultimo == 0 && ultimo == 4 || penultimo == 0 && ultimo == 8 || penultimo == 1 && ultimo == 2 ||
		penultimo == 1 && ultimo == 6 || penultimo == 2 && ultimo == 0 || penultimo == 2 && ultimo == 4 || penultimo == 2 && ultimo == 8 ||
		penultimo == 3 && ultimo == 2 || penultimo == 3 && ultimo == 6 || penultimo == 4 && ultimo == 0 || penultimo == 4 && ultimo == 4 ||
		penultimo == 4 && ultimo == 8 || penultimo == 5 && ultimo == 2 || penultimo == 5 && ultimo == 6 || penultimo == 6 && ultimo == 0 ||
		penultimo == 6 && ultimo == 4 || penultimo == 6 && ultimo == 8 || penultimo == 7 && ultimo == 2 || penultimo == 7 && ultimo == 6 ||
		penultimo == 8 && ultimo == 0 || penultimo == 8 && ultimo == 4 || penultimo == 8 && ultimo == 8 || penultimo == 9 && ultimo == 2 ||
		penultimo == 9 && ultimo == 6){
		out("S");
	}
	else{
		out("N");
	}
	if(soma % 9 == 0){
		out("S");
	}
	else{
		out("N");
	}
	if(penultimo == 0 && ultimo == 0 || penultimo == 5 && ultimo == 0 || penultimo == 2 && ultimo == 5 || penultimo == 7 && ultimo == 5){
		out("S");
	}
	else{
		out("N");
	}
}
