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
	map <int, int> dado;
	int n, input, maior = 1;
	
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;
		if(dado.count(input)){
			dado[input]++;
			if(dado[input] > maior){
				maior = dado[input];
			}
		}
		else{
			dado.insert(mkp(input, 1));
		}
	}

	for(auto i = dado.begin() ; i != dado.end(); i++){
		if((*i).second == maior){
			cout << (*i).first <<  " ";
		}
    }
	cout << endl;
}
