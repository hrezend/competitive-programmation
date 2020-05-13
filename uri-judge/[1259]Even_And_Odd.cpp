//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	vector <int> pares;
	vector <int> impares;
	int input;
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input;
		if(input % 2 == 0){
			pares.push_back(input);
		}
		else{
			impares.push_back(input);
		}
	}
	
	sort(pares.begin(), pares.end());
	sort(impares.rbegin(), impares.rend());

	for(int i = 0; i < pares.size(); i++){
		cout << pares[i] << endl;
	}
	for(int i = 0; i < impares.size(); i++){
		cout << impares[i] << endl;
	}


}
