//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;

	int N;

	while(1){
		
		cin >> N;
		if(N == 0){
			break;
		}
		else{
			int Matriz [N][N];
			int Contador = 1;
			int Comeco = 0;
			int Limite = N;
			int Input = 1;
			int Repeticoes = 1;
		
			if(N%2 == 0){
				Repeticoes = N/2;
			}
			else if(N%2 == 1){
				Repeticoes = (N/2)+1;
			}
			for(int p = 1; p <= Repeticoes; p++){
				for(int i = Comeco; i < Limite; i++){
					for(int j = Comeco; j < Limite; j++){
						Matriz[i][j] = Input;
					}
				}
				Comeco++;
				Limite--;
				Input++;
			}
	
			int q, w;
			for(q = 0; q < N; q++){
				for(w = 0; w < N-1; w++){
					cout << setw(3) << Matriz[q][w] << " "; 
				}
				cout << setw(3) << Matriz[q][w] << endl;
			}

			cout << endl;
		}
	}	
}
