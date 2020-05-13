//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int J;
	cin >> J;
  vector <int> Moedas;
  int TamPulo;
  int TotalMoedas = 0;
  int input;

  for(int i = 0; i < J; i++){
    cin >> input;
    Moedas.push_back(input);
  }

  cin >> TamPulo;

	for(int k = 0; k < J; k+= TamPulo){
		TotalMoedas += Moedas[k];
	}

  cout << TotalMoedas << endl;

}

