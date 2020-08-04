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
	int num_casos, input;	
	cin >> num_casos;
	
	for(int i = 0; i < num_casos; i++){
		int milhar = 0, centena = 0, dezena = 0, unidade = 0, count = 0;
		cin >> input;
		milhar = input/1000;
		centena = (input - (milhar*1000)) / 100;
		dezena = (input - (milhar*1000) - (centena*100)) / 10;
		unidade = (input - (milhar*1000) - (centena*100) - (dezena*10));
		if(milhar != 0) count++;
		if(centena != 0) count++;
		if(dezena != 0) count++;
		if(unidade != 0) count++;
		
		out(count);
		if(milhar != 0){
			cout << milhar*1000 << " ";
		}
		if(centena != 0){
			cout << centena*100 << " ";
		}
		if(dezena != 0){
			cout << dezena*10 << " ";
		}
		if(unidade != 0){
			cout << unidade*1 << " ";
		}
		cout << endl;
	}
}