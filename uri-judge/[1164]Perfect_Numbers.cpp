//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	
	desync;
	int N;
	cin >> N;
	int Valor;
	int Contador = 0;

    for(int j = 0; j < N; j++){
        cin >> Valor;
	    for(int i = 2; i <= Valor; i++){    
		    if(Valor%i == 0){
		        Contador += Valor/i;
		    }
	    }
	    if(Contador == Valor){
	        cout << Valor << " eh perfeito" << endl;
	    }
	    else{
	        cout << Valor << " nao eh perfeito" << endl;
	    }
	    Contador = 0;
	}
	
}
