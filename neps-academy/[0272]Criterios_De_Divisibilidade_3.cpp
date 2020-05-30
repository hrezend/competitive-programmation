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
	int sum_par = 0, sum_impar = 0, resultado = 0;
	string number;
	cin >> number;
	int tamanho = number.length();

	for(int i = 0; i < tamanho; i++){
		if(number[i] == '1'){
			if(i % 2 == 0){sum_par += 1;}
			else{sum_impar += 1;}
		}
		else if(number[i] == '2'){
			if(i % 2 == 0){sum_par += 2;}
			else{sum_impar += 2;}
		}
		else if(number[i] == '3'){
			if(i % 2 == 0){sum_par += 3;}
			else{sum_impar += 3;}
		}
		else if(number[i] == '4'){
			if(i % 2 == 0){sum_par += 4;}
			else{sum_impar += 4;}
		}
		else if(number[i] == '5'){
			if(i % 2 == 0){sum_par += 5;}
			else{sum_impar += 5;}
		}
		else if(number[i] == '6'){
			if(i % 2 == 0){sum_par += 6;}
			else{sum_impar += 6;}
		}
		else if(number[i] == '7'){
			if(i % 2 == 0){sum_par += 7;}
			else{sum_impar += 7;}
		}
		else if(number[i] == '8'){
			if(i % 2 == 0){sum_par += 8;}
			else{sum_impar += 8;}
		}
		else if(number[i] == '9'){
			if(i % 2 == 0){sum_par += 9;}
			else{sum_impar += 9;}
		}
	}
	
	resultado = abs(sum_impar-sum_par);

	if(resultado % 11 == 0 || resultado == 0){
		out("S");
	}
	else{
		out("N");
	}

}
