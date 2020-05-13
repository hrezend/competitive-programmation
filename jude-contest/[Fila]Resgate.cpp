//Author: Hérson Rezende - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	queue <int> Fila;
	int C = 0;
	int N, K, input;
	cin >> N >> K;

	for(int i = 0; i < N; i++){
		cin >> input;
		Fila.push(input);
	}
	for(int i = 0; i < K; i++){
		if(Fila.front() <= C+1){
			cout << Fila.front() << endl;
			Fila.pop();
			C++;
		}
		else{
			Fila.push(Fila.front());
			Fila.pop();
			K++;
			C++;
		}
	}
}
