//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;

	stack <char> Pilha;	
	string Sequence;
	cin >> Sequence;
	int Tamanho = Sequence.length();
	int Condicao = 0;

	if(Sequence[0] != '}' && Sequence[0] != ')' && Sequence[0] != ']'){
		Pilha.push(Sequence[0]);
		for(int i = 1; i < Tamanho; i++){
			if(Sequence[i] == '(' || Sequence[i] == '[' || Sequence[i] == '{'){
				Pilha.push(Sequence[i]);
			}
			if(!Pilha.empty()){
				if(Sequence[i] == ')' && Pilha.top() == '('){
					Pilha.pop();
				}
				else if (Sequence[i] == '}' && Pilha.top() == '{'){
					Pilha.pop();
				}
				else if (Sequence[i] == ']' && Pilha.top() == '['){
					Pilha.pop();
				}
			}
		}
	}
	else{
		Condicao = 1;
	}

	if(Condicao == 0){
		if(Pilha.empty()){
			cout << "BEM" << endl;
		}
		else{
			cout << "MAL" << endl;
		}
	}
	else{
		cout << "MAL" << endl;
	}
}
