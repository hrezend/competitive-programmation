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

long long int fatorial(int n){
	long long int count = 1;
	if(n == 0){
		return count;
	}
	for(int i = n; i > 0; i--){
		count *= i;
	}
	return count;
}

int main(){
	desync;
	ifstream cin("popcorn.in");
	int qtd_casos, total, transportar;
	
	cin >> qtd_casos;
	
	for(int i = 0; i < qtd_casos; i++){
		cin >> total >> transportar;
		long long int fat_total = fatorial(total);
		long long int fat_trans = fatorial(transportar);
		long long int fat_total_trans = fatorial(total - transportar);
		long long int answer = fat_total / (fat_trans * fat_total_trans);
		out(answer);
	}
}