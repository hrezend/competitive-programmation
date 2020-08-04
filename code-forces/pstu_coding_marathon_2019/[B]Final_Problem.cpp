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

int main(){
	desync;
	int input, answer = 10, menor_nvl_equipe = INT_MAX, menor_nvl_questao = INT_MAX, qtd_equipes;
	
	cin >> qtd_equipes;
	
	for(int i = 0; i < qtd_equipes; i++){
		cin >> input;
		if(input < menor_nvl_equipe){
			menor_nvl_equipe = input;
		}
	}
	for(int i = 0; i < 10; i++){
		cin >> input;
		if(input < menor_nvl_questao){
			menor_nvl_questao = input;
		}
	}
	if(menor_nvl_equipe < menor_nvl_questao){
		answer = menor_nvl_equipe;
	}
	
	out(answer);
}