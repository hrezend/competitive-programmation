//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	string Frase;
	int Casos, Tamanho, CountCaracteresUsados;
	cin >> Casos;
	cin.ignore();

	for(int i = 0; i < Casos; i++){
		char Letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
		getline(cin, Frase);
		Tamanho = Frase.length();
		CountCaracteresUsados = 0;
		
		for(int k = 0; k < Tamanho; k++){
			for(int j = 0; j < 26; j++){
				if(Frase[k] == Letras[j]){
					Letras[j] = '0';
					CountCaracteresUsados++;
				}
			}
		}
		
		if(CountCaracteresUsados < 13){
			cout << "frase mal elaborada" << endl;
		}
		else if(CountCaracteresUsados < 26 && CountCaracteresUsados > 12){
			cout << "frase quase completa" << endl;
		}
		else if(CountCaracteresUsados >= 26){
			cout << "frase completa" << endl;
		}	
	}


}
