//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N;
	cin >> N;
	int Cores[N], Fita[N], Cores1[N], Cores2[N];
	int Contador = 0, CountZero = 0, CountZero2 = 0, Count = 1, Count2 = 1;

	for(int i = 0; i < N; i++){
		cin >> Fita[i];
		if(Fita[i] == 0){
			CountZero++;		
		}
	}

	CountZero2 = CountZero;

	for(int q = 0; q < N; q++){
		Contador = 0;
		for(int w = q; w < N; w++){
			if(CountZero != 0){
				if(Fita[q] == 0){
					Cores1[q] = 0;
					CountZero--;
					break;
				}
				if(Fita[w] != 0){
					Contador++;
				}
				if(Fita[w] == 0 || w == N-1){
					Cores1[q] = Contador;
					break;
				}
			}
			else{
				Cores1[q] = Count;
				Count++;
				break;
			}		
		}
	}
	for(int q = N-1; q >= 0; q--){
		Contador = 0;
		for(int w = q; w >= 0; w--){
			if(CountZero2 != 0){
				if(Fita[q] == 0){
					Cores2[q] = 0;
					CountZero2--;
					break;
				}
				if(Fita[w] != 0){
					Contador++;
				}
				if(Fita[w] == 0 || w == 0){
					Cores2[q] = Contador;
					break;
				}
			}
			else{
				Cores2[q] = Count2;
				Count2++;
				break;
			}		
		}
	}

	for(int q = 0; q < N; q++){
		if(Cores1[q] >= 9){
			Cores1[q] = 9;
		}
		if(Cores2[q] >= 9){
			Cores2[q] = 9;
		}
		if(Cores1[q] == Cores2[q]){
			Cores[q] = Cores1[q];
		}
		if(Cores2[q] < Cores1[q]){
			Cores[q] = Cores2[q];
		}
		if(Cores1[q] < Cores2[q]){
			Cores[q] = Cores1[q];
		}
		if(Cores1[q] == 0 && Cores2[q] != 0){
			Cores[q] = Cores2[q];
		}
	}

	for(int k = 0; k < N; k++){
		cout << Cores[k] << " ";
	}
	
	cout << endl;
}
