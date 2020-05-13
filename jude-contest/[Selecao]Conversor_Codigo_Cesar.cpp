//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	string codigo = "VIW BMU MVBZILI. I AIQLI MP CU VCUMZW LM 1 I 20, JWI AWZBM.";
	int tamanho = codigo.size();
	char cdg[tamanho];
	int tamMin = 65;
	int tamMax = 90;
	int Chave = 8;

	for(int i = 0; i < tamanho; i++){
		if(codigo[i] >=  tamMin && codigo[i] <= tamMax){
			if(codigo[i]-Chave >= tamMin){			
				cdg[i] = codigo[i]-Chave;
			}
			else{	
				int Quantidade = (Chave+tamMin) - cdg[i];
				cdg[i] = tamMax - Quantidade;
			}
		}
		else{
			cdg[i] = codigo[i];
		}
	}
	
	for(int i = 0; i < tamanho; i++){	
		cout << cdg[i];
	}
}
