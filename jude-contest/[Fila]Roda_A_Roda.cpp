//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	
	queue <int> Valores;
	int N, Input, Volta;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> Input;
		Valores.push(Input);
	}
	
	for(int i = 0; i < N-1; i++){
		cin >> Volta;
		for(int k = 0; k < Volta; k++){
			Valores.push(Valores.front());
			Valores.pop();
		}
		Valores.pop();
	}
	cout << Valores.front() << endl;	
}
