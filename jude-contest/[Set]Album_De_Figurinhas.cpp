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
	int c, p, input, count_trocavel_p = 0, count_trocavel_c = 0;
	set <int> fig_p, fig_c;
	cin >> p >> c;

	while(p != 0 && c != 0){
		for(int i = 0; i < p; i++){
			cin >> input;
			fig_p.insert(input);
		}
		for(int i = 0; i < c; i++){
			cin >> input;
			fig_c.insert(input);
		}
		for(auto i = fig_p.begin() ; i != fig_p.end(); i++){
        	if(!fig_c.count(*i)){
				count_trocavel_p++;	
			}
    	}
		for(auto i = fig_c.begin() ; i != fig_c.end(); i++){
        	if(!fig_p.count(*i)){
				count_trocavel_c++;	
			}
    	}

		cout << min(count_trocavel_p, count_trocavel_c) << endl;
		cin >> p >> c;
		fig_p.clear();
		fig_c.clear();
		count_trocavel_p = 0;
		count_trocavel_c = 0;
	}
}
