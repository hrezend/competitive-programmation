//Author: Hrz - 2ºSM/CC
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	
	desync
	int N;
	cin >> N;
	vector <int> V;
	
	int input;
	cin >> input;
	V.push_back(input);
	int Inicio = input;
	int Fim;
	int ValorAtual;	

	for(int i = 1; i < N; i++){
		cin >> input;
		V.push_back(input);
	
		if(input != V[i-1]+1){
			Fim = V[i-1];
			cout << Inicio << " " << Fim << endl;
			Inicio = input;	
		}
		else{
			ValorAtual = input; 		
		}
		if(i == N-1){
			Fim = input;
			cout << Inicio << " " << Fim << endl;
		}
	}

}
