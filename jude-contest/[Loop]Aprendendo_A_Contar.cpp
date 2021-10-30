#include <bits/stdc++.h>
using namespace std;

void solve(){
	bool flag;
    	int quantidadeDeCasos, quantidadeDeNumeros, input, auxiliar;
    	cin >> quantidadeDeCasos;
    
    	for(int i = 0; i < quantidadeDeCasos; i++){
    		cin >> quantidadeDeNumeros;
    		auxiliar = 0;
    		flag = true;
    	
    		for(int j = 0 ; j < quantidadeDeNumeros; j++){
    			cin >> input;
    			
    			if(input != (auxiliar+1)){
    				flag = false;
    			}
    			
    			auxiliar = input;
    		}
    		
    		if(flag){
    			cout << "Correto" << endl;
    		}
    		else{
    			cout << "Incorreto" << endl;
    		}
    	}
}

int main(){
    solve();
}
