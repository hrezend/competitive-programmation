//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	int N;
	int EntradaA, EntradaB;
	int ContadorA, ContadorB;

	cin >> N;

	while(N != 0){
		ContadorA = 0, ContadorB = 0;
		for(int i = 0; i < N; i++){
			cin >> EntradaA >> EntradaB;
			
			if(EntradaA > EntradaB){
				ContadorA++;
			}
			if(EntradaA < EntradaB){
				ContadorB++;
			}
		}
		cout << ContadorA << " " << ContadorB << endl;
		cin >> N;	
	}


}
