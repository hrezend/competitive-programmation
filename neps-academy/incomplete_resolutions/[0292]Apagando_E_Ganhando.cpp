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
	int n, k;
	char aux;
	
	cin >> n >> k;
	
	while(n != 0 && k != 0){
		int cont = 1;
		stack <char> pilha1, pilha2;
		char aux2, swift;
		cin >> aux;
		vector<char>v;
		pilha1.push(aux);
		
		for(int i =1 ; i < n ; i++){
			cin >> aux;
			if(cont < k){
				if(pilha1.top() > aux){
					swift = pilha1.top();
					pilha1.pop();
					pilha1.push(aux);
					pilha1.push(swift);
				}
				else{
					pilha1.push(aux);
				}
				cont++;
			}
			else if(cont == k){
				if(pilha1.top() > aux){
					pilha2.push(pilha1.top());
					pilha1.pop();
					pilha1.push(aux);
				}
				else{
					pilha2.push(aux);
				}
			}	
		}
		while(!pilha2.empty()){
			v.pb(pilha2.top());
			pilha2.pop();
		}
		for(int i = v.size() - 1 ; i >= 0 ; i--){
			cout << v[i];
		}
		cout << endl;
		cin >> n >> k;
	}
}
