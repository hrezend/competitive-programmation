#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	int N, C;
	cin >> N >> C;

	string especie[N];
	int altura[N];
	
	for(int i = 0; i < N; i++){
		cin >> especie[i] >> altura[i];
	}
	
	int menorPos, Auxiliar;
	string AuxiliarStr;
	for(int j = 0; j < N-1; j++){
		menorPos = j;
		for(int k = j+1; k < N; k++){		
			if(altura[menorPos] < altura[k]){
				Auxiliar = altura[menorPos];
				altura[menorPos] = altura[k];
				altura[k] = Auxiliar;

				AuxiliarStr = especie[menorPos];
				especie[menorPos] = especie[k];
				especie[k] = AuxiliarStr;
			}
		}
	}

	for(int h = 0; h < C; h++){
		cout << especie[h] << endl;
	}
}
