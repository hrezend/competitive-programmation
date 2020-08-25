//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	vector <int> palitos;
	int qtd_palitos, input, answer = 0, soma = 0;
	cin >> qtd_palitos;
	
	for(int i = 0; i < qtd_palitos; i++){
		cin >> input;
		palitos.push_back(input);
		soma += input;
	}
	sort(palitos.begin(), palitos.end());
	
	for(int i = palitos.size()-1; i >= 0; i--){
        soma -= palitos[i];
        if(soma > palitos[i]){
            answer = i+1;
            break;
        }
    }
	
	if(answer <= 2){
		cout << "0" << endl;
	}
	else{
		cout << answer << endl;
	}
}

int main(){
  desync;
  solve();
}