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

int problem(int k){
	int Contador = 0;
	while(k != 1){
		Contador++;
		if(k % 2 == 0){
			k = k/2;
		}
		else{
			k = (k*3)+1;
		}
	}
	return Contador;
}

int main(){
    desync;
	int n;

	cin >> n;

	out(problem(n));
}
