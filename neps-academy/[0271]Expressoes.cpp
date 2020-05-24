//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define lng(x) x.length()
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define mkp(x,y) (make_pair(x,y))

using namespace std;

int main(){
	desync;
	string Sequence;
	int N;
	cin >> N;

	for(int g = 0; g < N; g++){
		cin >> Sequence;
		int Tamanho = lng(Sequence);
		int Condicao = 0;
		stack <char> Pilha;	
		if(Sequence[0] != '}' && Sequence[0] != ')' && Sequence[0] != ']'){
			Pilha.push(Sequence[0]);
			for(int i = 1; i < Tamanho; i++){
				if(Sequence[i] == '(' || Sequence[i] == '[' || Sequence[i] == '{'){
					Pilha.push(Sequence[i]);
				}
				if(!empty(Pilha)){
					if(Sequence[i] == ')' && top(Pilha) == '('){
						pop(Pilha);
					}
					else if (Sequence[i] == '}' && top(Pilha) == '{'){
						pop(Pilha);
					}
					else if (Sequence[i] == ']' && top(Pilha) == '['){
						pop(Pilha);
					}
				}
				else if(empty(Pilha) && Sequence[i] == ')' || empty(Pilha) && Sequence[i] == '}' || empty(Pilha) && Sequence[i] == ']'){
					Condicao = 1;
				}
			}
		}
		else{
			Condicao = 1;
		}

		if(Condicao == 0){
			if(empty(Pilha)){
				cout << "S" << endl;
			}
			else{
				cout << "N" << endl;
			}
		}
		else{
			cout << "N" << endl;
		}
	}
}
