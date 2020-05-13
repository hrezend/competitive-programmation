//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    desync;
    vector <int> homens;
    vector <int> mulheres;
    int input;
    
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input;
		homens.push_back(input);
    }
	for(int i = 0; i < N; i++){
		cin >> input;
		mulheres.push_back(input);
    }

    sort(homens.rbegin(), homens.rend());
	sort(mulheres.begin(), mulheres.end());

    for(int i = 0; i < N; i++){
		cout << homens[i] << " " << mulheres[i] << endl;
	}
	
}
