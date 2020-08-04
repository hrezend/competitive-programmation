//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

char mat[26][26], aux;
void cfg_matriz();

int main(){
	desync;
	int n,linha,coluna, m;
	string descripto ,criptografado, result="";
	stack <char> cripto;
	queue <char> key;
	
	cin >> n >> m;
	cin >> descripto >> criptografado;

	cfg_matriz();

	for(int i = descripto.size()-1; i >= 0; i--){
		key.push(descripto[i]);
	}
	for(int i = 0; i < criptografado.size(); i++){
		cripto.push(criptografado[i]);
	}
    while(!cripto.empty()){
		linha = (int)key.front() - 97;
		coluna = (int)cripto.top() - 97;
		int teste = coluna - linha;
		if(teste < 0){
			teste += 26;
		}

		key.push((char)(teste+97));
		result += key.front();
		key.pop();
        cripto.pop();
    }
    for(int i = result.size()-1 ; i >=0; i--){
		cout << result[i];
	}
    cout << endl;
}
void cfg_matriz(){
    char ini = 'a';
    int cont = 0;
    for(int i = 0; i < 26; i++){
        ini = (char) ( ((int)'a') + cont++);
        for(int j = 0 ; j < 26; j++){
            mat[i][j] = ini++;
            if(ini > 'z'){
				ini = 'a';
			}
        }
    }
}