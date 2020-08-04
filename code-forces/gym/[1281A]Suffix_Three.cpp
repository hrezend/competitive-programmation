//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
using namespace std;

int main(){
	desync;
	map <string, string> dicionario;
	int qtd_casos;
	string input, aux;

	cin >> qtd_casos;

	dicionario.insert(make_pair("po", "FILIPINO"));
	dicionario.insert(make_pair("desu", "JAPANESE"));
	dicionario.insert(make_pair("masu", "JAPANESE"));
	dicionario.insert(make_pair("mnida", "KOREAN"));

	for(int i = 0; i < qtd_casos; i++){
		cin >> input;
		int tam = input.length();

		if(input[tam-1] == 'o' && input[tam-2] == 'p'){
			aux = "po";
		}
		else if(input[tam-1] == 'u' && input[tam-2] == 's' && input[tam-3] == 'e' && input[tam-4] == 'd'){
			aux = "desu";
		}
		else if(input[tam-1] == 'u' && input[tam-2] == 's' && input[tam-3] == 'a' && input[tam-4] == 'm'){
			aux = "masu";
		}
		else if(input[tam-1] == 'a' && input[tam-2] == 'd' && input[tam-3] == 'i' && input[tam-4] == 'n' && input[tam-5] == 'm'){
			aux = "mnida";
		}

		cout << dicionario[aux] << endl;
	}
}
