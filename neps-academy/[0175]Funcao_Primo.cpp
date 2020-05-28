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

int n_primo(int number){
	bool eh_primo = false;
	int count = 0;

	for(int i = 1; i <= number; i++){
		if(number % i == 0){
			count++;
		}
	}

	if(count == 2){
		eh_primo = true;	
	}

	return eh_primo;
}

int main(){
    desync;
	int num;

	cin >> num;
	if(n_primo(num)){
		out("S");
	}
	else{
		out("N");
	}
}
