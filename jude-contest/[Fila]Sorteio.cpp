//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	queue <int> Fila;
	int N, K, Input;
	cin >> N >> K;

	for(int i = 1; i <= N; i++){
		cin >> Input;
		if(Input < 0){
			Fila.push(i);
		}
	}

	for(int j = 1; j <= N; j++){
		if(Fila.front() >= j && Fila.front() <= K){
			if(Fila.front() == j){
				cout << Fila.front() << endl;
				Fila.pop();
			}
			else{
				cout << Fila.front() << endl;			
			}
		}
		else{
			cout << "0" << endl;
			Fila.pop();
		}

		K++;
		if(K > N){
			break;		
		}
	}

}
