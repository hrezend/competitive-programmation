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
	map <int, int> prog_inst;
	map <int, int> impressao;
	int qtd_inst, qtd_disp, prog, ver;

	cin >> qtd_inst >> qtd_disp;

	for(int i = 0; i < qtd_inst; i++){
		cin >> prog >> ver;
		prog_inst.insert(mkp(prog, ver));
	}
	for(int i = 0; i < qtd_disp; i++){
		cin >> prog >> ver;
		if(prog_inst.count(prog)){
			if(prog_inst[prog] < ver){
				prog_inst[prog] = ver;
				impressao[prog] = ver;
			}
		}
		else{
			prog_inst.insert(mkp(prog,ver));
			impressao.insert(mkp(prog,ver));
		}
	}

	for(auto i = impressao.begin() ; i != impressao.end(); i++){
        cout << (*i).first << " " << (*i).second << endl;
    }

}
