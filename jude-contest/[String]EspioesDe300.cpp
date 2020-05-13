//Author: Hrz - 2ºSM/CC
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	
	desync
	int Contador = 0;
	char S;	
	int N, P;
	cin >> N >> P >> S;
	string Palavras[N];
	cin.ignore();
	
	for(int i = 0; i < N; i++){
		getline(cin, Palavras[i]);
		if(Palavras[i].at(P) == S){
			Contador++;
		}
	}
	if(Contador == N){
		cout << "Nova Ronda" << endl;
	}
	else{
		cout << "Descansar" << endl;
	}
	
}
