//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int Codigo;
    int ContAlc = 0;
    int ContGas = 0;
    int ContDie = 0;
    
    for(int i = 0;; i++){
        cin >> Codigo;
        if(Codigo == 1){
            ContAlc++;
        }
        if(Codigo == 2){
            ContGas++;
        }
        if(Codigo == 3){
            ContDie++;
        }
        if(Codigo == 4){
            break;
        }
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << ContAlc << endl;
    cout << "Gasolina: " << ContGas << endl;
    cout << "Diesel: " << ContDie << endl;
    
}
