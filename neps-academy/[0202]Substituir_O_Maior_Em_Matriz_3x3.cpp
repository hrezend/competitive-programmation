//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'

using namespace std;

int main(){

	desync;
	int m[3][3];
	int maior = INT_MIN;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> m[i][j];
			if(m[i][j] > maior){
				maior = m[i][j];
			}
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(m[i][j] == maior){
				m[i][j] = -1;
			}
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

}
