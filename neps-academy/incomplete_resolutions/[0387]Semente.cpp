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
	int comp_fita, gotas_ini, input;
	cin >> comp_fita >> gotas_ini;
	int count_days = 0, count_gotas = gotas_ini;
	int fita[comp_fita] = {0};

	for(int i = 0; i < gotas_ini; i++){
		cin >> input;
		fita[input-1] = 1;
	}

	while(count_gotas != comp_fita){
		for(int i = 0; i < comp_fita; i++){
			if(fita[i] == 1){
				if(i-1 >= 0 && fita[i-1] == 0){
					fita[i-1] = 1;
					count_gotas++;
				}
				if(i+1 < comp_fita && fita[i+1] == 0){
					fita[i+1] = 1;
					count_gotas++;
				}
				if(fita[i+1] == 1 && fita[i-1] == 1){
					i++;
				}
			}
		}
		count_days++;
	}

	out(count_days);
}
