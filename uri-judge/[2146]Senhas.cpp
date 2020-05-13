//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	vector <int> senhas;
	int input;

	while(cin >> input){
		senhas.push_back(input);
	}

	for(int i = 0; i < senhas.size(); i++){
		cout << senhas[i]-1 << endl;
	}

}
