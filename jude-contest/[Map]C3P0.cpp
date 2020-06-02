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
	map <string, string> dicionario;
	vector <string> aux_frase;
	int qtd_p, qtd_l;
	string palavra, traducao, frase, aux = "", saida = "";
	int casos;
	
	cin >> casos;

	for(int i = 0; i < casos; i++){
		cin >> qtd_p >> qtd_l;
		cin.ignore();
		for(int j = 0; j < qtd_p; j++){
			getline(cin, palavra);
			getline(cin, traducao);
			dicionario.insert(mkp(palavra, traducao));
		}

		for(int k = 0; k < qtd_l; k++){
			getline(cin, frase);
			for(int q = 0; q < frase.length(); q++){
				aux += frase[q];
				if(frase[q+1] == ' ' || q == frase.length()-1){
					aux_frase.pb(aux);
					aux = "";
					if(q+1 < frase.length()){
						q++;
					}
				}
			}

			for(int w = 0; w < aux_frase.size(); w++){
				if(dicionario.count(aux_frase[w])){
					saida += dicionario[aux_frase[w]];
				}
				else{
					saida += aux_frase[w];
				}
				if(w < aux_frase.size()){
					saida += " ";
				}
			}
		
			out(saida);
			aux_frase.clear();
			aux = "";
			saida = "";
		}
		dicionario.clear();
	}
}
