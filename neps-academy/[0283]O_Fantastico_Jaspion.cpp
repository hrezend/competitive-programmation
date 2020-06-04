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
	vector <string> aux_verso;
	map <string, string> dicionario;
	string palavra, traducao, verso, aux = "", saida = "";
   	int qtd_instancias, qtd_palavras, qtd_traducoes;

	cin >> qtd_instancias;
	
	for(int i = 0; i < qtd_instancias; i++){
		cin >> qtd_palavras >> qtd_traducoes;
		cin.ignore();

		for(int j = 0; j < qtd_palavras; j++){
			getline(cin, palavra);
			getline(cin, traducao);
			dicionario.insert(mkp(palavra, traducao));
		}
		for(int k = 0; k < qtd_traducoes; k++){
			getline(cin, verso);
			for(int q = 0; q < verso.length(); q++){
				aux += verso[q];
				if(verso[q+1] == ' ' || q == verso.length()-1){
					aux_verso.pb(aux);
					aux = "";
					if(q+1 < verso.length()){
						q++;
					}
				}
			}
			for(int w = 0; w < aux_verso.size(); w++){
				if(dicionario.count(aux_verso[w])){
					saida += dicionario[aux_verso[w]];
				}
				else{
					saida += aux_verso[w];
				}
				if(w < aux_verso.size()){
					saida += " ";
				}
			}
		
			out(saida);
			aux_verso.clear();
			aux = "";
			saida = "";	
		}
		dicionario.clear();
		cout << endl;
	}
}
