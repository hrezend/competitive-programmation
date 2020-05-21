//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vii;
typedef vector <vi> matriz;

int main(){
	desync;

	stack <int> PP;
	stack <int> PJ;	
	int P, J;
	int ptsP = 0, ptsJ = 0;

	for(int i = 0; i < 12; i++){
		cin >> J >> P;
	
		if(J > 0){
			PJ.push(J);
		}
		else if(J < 0){
			for(int k = 0; k < J*(-1); k++){
				if(!PP.empty()){
					PP.pop();
				}
			}
		}
		if(P > 0){
			PP.push(P);
		}
		else if(P < 0){
			for(int l = 0; l < P*(-1); l++){
				if(!PJ.empty()){
					PJ.pop();
				}
			}
		}	
	}

	while(!PJ.empty()){
		ptsJ += PJ.top();
		PJ.pop();
	}

	while(!PP.empty()){
		ptsP += PP.top();
		PP.pop();
	}

	if(ptsP > ptsJ){
		cout << "Pedrinho " << ptsP << endl; 
	}
	else if(ptsP < ptsJ){
		cout << "Joaozinho " << ptsJ << endl; 
	}
	else if(ptsP == ptsJ){
		cout << "Empate" << endl; 
	}
}
