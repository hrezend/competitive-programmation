//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Entrada;
    cin >> Entrada;
    
    int Fatorial = 1;
    
    for(int i = Entrada;; i--){
        Fatorial = Fatorial*i;
        
        if(i == 1){
            break;
        }
    }
    
    cout << Fatorial << endl;
}
