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

	stack <char> pil;
	string input, sequence = "";
	int n;
	cin >> n;
	cin.ignore();	

	for(int i = 0; i < n; i++){
		getline(cin, input);
		int tamanho = input.length();
		for(int j = 0; j < tamanho; j++){
			if(input[j] == '}' || input[j] == '{'){
				sequence += input[j];
			}
		}
	}

	for(int i = 0; i < sequence.length(); i++){
		if(sequence[i] == '{'){
			pil.push(sequence[i]);
		}
		if(!pil.empty()){
			if(sequence[i] == '}' && pil.top() == '{'){
				pil.pop();
			}
		}
		else if(pil.empty() && sequence[i] == '}'){
			pil.push(sequence[i]);				
			break;
		}
	}

	if(pil.empty()){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}

}
