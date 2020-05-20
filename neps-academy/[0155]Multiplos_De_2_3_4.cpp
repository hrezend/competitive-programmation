//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pi 3.1416
using namespace std;

int main(){	
	desync;

	int N;
	cin >> N;
	int M2 = 0, M3 = 0, M4 = 0;
	int Presentes[N];

	for(int i = 0; i < N; i++){
		cin >> Presentes[i];
	}

	for(int j = 0; j < N; j++){
		if(Presentes[j] % 2 == 0){
			M2++;
		}
		if(Presentes[j] % 3 == 0){
			M3++;
		}
		if(Presentes[j] % 4 == 0){
			M4++;
		}
	}
	
	cout << M2 << endl;
	cout << M3 << endl;
	cout << M4 << endl;
}
