//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << "debug: " << x << endl
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
	string sequence;
	int n;
	cin >> n;

	for(int g = 0; g < n; g++){
		cin >> sequence;
		int tamanho = lng(sequence);
		stack <char> pil;

		for(int i = 0; i < tamanho; i++){
			if(sequence[i] == '(' || sequence[i] == '[' || sequence[i] == '{'){
				pil.push(sequence[i]);
			}
			if(!empty(pil)){
				if(sequence[i] == ')' && top(pil) == '(' || sequence[i] == '}' && top(pil) == '{' || sequence[i] == ']' && top(pil) == '['){
					pop(pil);
				}
				else if(top(pil) == '(' && sequence[i] == '}' || sequence[i] == ']'){
					break;
				}
				else if(top(pil) == '{' && sequence[i] == ')' || sequence[i] == ']'){
					break;
				}
				else if(top(pil) == '[' && sequence[i] == ')' || sequence[i] == '}'){
					break;
				}
			}
			else if(empty(pil) && sequence[i] == ')' ||  sequence[i] == '}' ||  sequence[i] == ']'){
				pil.push(sequence[i]);				
				break;
			}
		}
		
		if(empty(pil)){
			cout << "S" << endl;
		}
		else{
			cout << "N" << endl;
		}

	}
}
