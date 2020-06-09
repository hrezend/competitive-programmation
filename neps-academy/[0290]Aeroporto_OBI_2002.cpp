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
	int qtd_voos, qtd_aerop, teste = 1, maior = INT_MIN;
	int a[105] = {0};
	int a1, a2;
	cin >> qtd_aerop >> qtd_voos;

	while(qtd_aerop != 0 && qtd_voos != 0){
		for(int i = 1; i <= qtd_aerop; i++){
			a[i] = 0;
		}

		for(int i = 0; i < qtd_voos; i++){
			cin >> a1 >> a2;
			a[a1]++;
			a[a2]++;
		}

		for(int i = 1; i <= qtd_aerop; i++){
			if(a[i] >= maior){
				maior = a[i];
			}
		}

		cout << "Teste " << teste << endl;
		for(int i = 1; i <= qtd_aerop; i++){
			if(a[i] == maior){
				cout << i << " ";
			}	
		}
		cout << endl;
		cout << endl;


		teste++;
		maior = INT_MIN;
		cin >> qtd_aerop >> qtd_voos;
	}
}
