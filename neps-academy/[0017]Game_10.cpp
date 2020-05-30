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
	int count = 0;
	int qtd_pos, pos_disc, pos_aviao;

	cin >> qtd_pos >> pos_disc >> pos_aviao;
	
	for(;;){
		if(pos_disc == pos_aviao){
			break;
		}
		if(pos_aviao > qtd_pos){
			pos_aviao = 0;
			count--;
		}
		pos_aviao++;
		count++;
	}
	
	out(count);
}
