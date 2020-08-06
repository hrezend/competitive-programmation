//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int t;
	cin >> t;
	
	while(t--){
		vector <long long> d, l;
		long long tam_p, answer = 0, input, menor_d = 9999999999, menor_l = 9999999999;
		cin >> tam_p;
		
		for(long long i = 0; i < tam_p; i++){
			cin >> input;
			d.push_back(input);
			menor_d = min(input, menor_d);
		}
		for(long long i = 0; i < tam_p; i++){
			cin >> input;
			l.push_back(input);
			menor_l = min(input, menor_l);
		}
		
		for(long long i = 0; i < tam_p; i++){
			if(d[i] > menor_d && l[i] > menor_l){
				long long x = d[i] - menor_d;
				long long y = l[i] - menor_l;
				d[i] -= min(x,y);
				l[i] -= min(x,y);
				answer += min(x,y);
			}
			if(d[i] > menor_d){
				answer += d[i] - menor_d;
			}
			if(l[i] > menor_l){
				answer += l[i] - menor_l;
			}
		}
		out(answer);
	}
}

int main(){
  desync;
  solve();
}