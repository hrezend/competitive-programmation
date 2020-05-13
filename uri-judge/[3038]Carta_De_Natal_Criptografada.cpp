//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	string Frase;
	string Frases[10000];
	int Contador = 0;
	
	
	while(getline(cin, Frase)){
	
		for(int i = 0; i < Frase.length(); i++){
			if(Frase[i] == '@'){
				Frase[i] = 'a';
			}
			if(Frase[i] == '&'){
				Frase[i] = 'e';
			}
			if(Frase[i] == '!'){
				Frase[i] = 'i';
			}
			if(Frase[i] == '*'){
				Frase[i] = 'o';
			}
			if(Frase[i] == '#'){
				Frase[i] = 'u';
			}
		}
	
		Frases[Contador] = Frase;
		Contador++;
	}

	for(int i = 0; i < Contador; i++){
		cout << Frases[i] << endl;		
	}

}
