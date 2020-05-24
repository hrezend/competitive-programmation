//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

int main(){

	desync;
	long long int palitos;
	cin >> palitos;
	long long int v[palitos];
	long long int aux_i, aux_j, aux_k;
	long long int area;
	long long int maior = 0;

	for(int i = 0; i < palitos; i++){
		cin >> v[i];
	}

	sort(v, v+palitos);

	for(int i = 0; i < palitos-2; i++){
		for(int j = i+1; j < palitos-1; j++){
			for(int k = j+1; k < palitos; k++){
				if(v[i]+v[k] > v[j] || v[i]+v[j] > v[k] || v[j]+v[k] > v[i]){
					area = v[i]*v[j]/v[k];
					if(area > maior){
						aux_i = v[i];
						aux_j = v[j];
						aux_k = v[k];
						maior = area;
					}
				}
			}
		}
	}

	cout << aux_i << " " << aux_j << " " << aux_k << endl;
}
